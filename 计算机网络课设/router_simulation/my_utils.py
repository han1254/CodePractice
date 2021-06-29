import re


def exchange_maskint(mask_int):
    """
    通过掩码位数获得子网掩码
    :param mask_int:
    :return:
    """
    bin_arr = ['0' for i in range(32)]
    for i in range(mask_int):
        bin_arr[i] = '1'
    tmpmask = [''.join(bin_arr[i * 8:i * 8 + 8]) for i in range(4)]
    tmpmask = [str(int(tmpstr, 2)) for tmpstr in tmpmask]
    return '.'.join(tmpmask)


def get_mask(cidr):
    """
    获得掩码
    :param cidr:
    :return:
    """
    mask = cidr.split("/")[1]
    return exchange_maskint(int(mask))


def check_is_des(des_net, des_ip, mask):
    """
    检测目的ip是否为当前路由表中一项的目的网络
    :param des_net: 路由器的一个目的网络
    :param des_ip:  目的ip地址或者目的网络
    :param mask:  子网掩码
    :return:
    """

    mask_list = mask.split('.')
    source_list = des_ip.split('.')
    result_list = [str(int(mask_list[i]) & int(source_list[i])) for i in range(4)]

    des_list = des_net.split('/')[0].split('.')

    for i in range(4):
        if des_list[i] != result_list[i]:
            return False
    return True


def check_mask(mask_str):
    """
    检查是否为掩码形式
    :param mask_str:
    :return:
    """
    pattern = '^((128|192)|2(24|4[08]|5[245]))(\.(0|(128|192)|2((24)|(4[08])|(5[245])))){3}$'
    res = re.match(pattern, mask_str)
    if not res:
        return False
    return True


def check_ip_pack(ip_str):
    """
    校验地址块
    :param ip_str:
    :return:
    """
    pattern = '^((2(5[0-5]|[0-4]\d))|[0-1]?\d{1,2})(\.((2(5[0-5]|[0-4]\d))|[0-1]?\d{1,2})){3}/([0-2]?\d)|30$'
    res = re.match(pattern, ip_str)
    if not res:
        return False
    return True
