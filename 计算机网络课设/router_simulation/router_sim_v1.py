'''
Autor:han1254
Email:1254763408@qq.com
'''
import pymysql
import tkinter
from tkinter import ttk
import queue
from net_matrix import *
from my_utils import *


class MainPart:
    def __init__(self, db, cursor):
        self.__db = db
        self.__cursor = cursor
        self.main_part = tkinter.Tk()
        self.main_part.geometry("500x500")
        self.main_part.configure(bg='yellow')

        btn_add_net = tkinter.Button(master=self.main_part, text="添加Net", command=self.btn_add_net)
        btn_add_net.pack()

        btn_add_router = tkinter.Button(master=self.main_part, text="添加路由器", command=self.btn_add_router)
        btn_add_router.pack()

        btn_add_find_next = tkinter.Button(master=self.main_part, text="下一跳测试", command=self.btn_next_hop)
        btn_add_find_next.pack()

        btn_build_table = tkinter.Button(master=self.main_part, text="构建路由表", command=self.btn_build_table)
        btn_build_table.pack()

        btn_show_table = tkinter.Button(master=self.main_part, text="显示路由表", command=self.btn_show_table)
        btn_show_table.pack()

        btn_del_tables = tkinter.Button(master=self.main_part, text="清空路由表", command=self.btn_del_tables)
        btn_del_tables.pack()
        self.main_part.mainloop()

    def btn_del_tables(self):
        sql_del_tables(cur, db)

    def btn_build_table(self):
        build_table(cur, db)

    def btn_show_table(self):

        def delTv():
            x = tv.get_children()
            for item in x:
                tv.delete(item)

        def insert_data():
            delTv()
            router = box_select.get()
            if router is None:
                print("请选择路由器")
            else:
                table_data = sql_get_router_table_by_name(router, cur, db)
                column_datas = []
                for t in table_data:
                    temp = []
                    temp.append(t['r_name'])
                    temp.append(t['des_net'])
                    temp.append(t['mask_code'])
                    temp.append(t['cost'])
                    temp.append(t['nr_name'])
                    temp.append(t['next_ip'])
                    column_datas.append(temp)
                for i, node in enumerate(column_datas):
                    tv.insert('', i, values=node)

        window = tkinter.Toplevel(self.main_part)

        r_datas = sql_get_all_routers(cur, db)
        datas = []
        for d in r_datas:
            datas.append(d['router_name'])
        box_select = ttk.Combobox(window, value=datas)

        box_select.pack()
        btn_confirm = tkinter.Button(window, text="显示", command=insert_data)
        btn_confirm.pack()
        # 实例化控件，设置表头样式和标题文本
        columns = ("r_name", "des_net", "mask", "cost", "next_hop_name", "next_ip")
        headers = ("路由器", "目的网络", "子网掩码", "距离", "下一跳", "下一跳ip")
        widthes = (120, 120, 120, 120, 120, 120)
        tv = ttk.Treeview(master=window, show="headings", columns=columns)

        for (column, header, width) in zip(columns, headers, widthes):
            tv.column(column, width=width, anchor="w")
            tv.heading(column, text=header, anchor="w")
        tv.pack()

    def btn_next_hop(self):
        def start_test():
            router = box.get()
            des = ip_input.get()
            if router is not None:
                table = sql_get_router_table_by_name(router, cur, db)
                print(table)
                flag = False
                if des is not None:
                    print("正在遍历路由表...")
                    for entry in table:
                        print("当前条目：目的网络:" + entry['des_net'] + ', 掩码:' + entry['mask_code'] + '下一跳地址:' + entry[
                            'next_ip'])
                        if check_is_des(entry['des_net'], des, entry['mask_code']):
                            print("查找成功")
                            print(entry['nr_name'])
                            print(entry['next_ip'])
                            flag = True
                            break
                    if not flag:
                        print('查找失败')
                else:
                    print('输入目的网络')
            else:
                print("选择路由器")

        test_part = tkinter.Toplevel(self.main_part)
        test_part.geometry('300x300')
        input_label = tkinter.Label(master=test_part, text="选择中转路由")
        r_datas = sql_get_all_routers(cur, db)
        datas = []
        for d in r_datas:
            datas.append(d['router_name'])
        box = ttk.Combobox(master=test_part, values=datas)
        input_label.pack()
        box.pack()
        label_ip = tkinter.Label(master=test_part, text="输入目的地址")
        ip_input = tkinter.Entry(master=test_part)

        btn_confirm = tkinter.Button(master=test_part, text="开始测试", command=start_test)
        label_ip.pack()
        ip_input.pack()
        btn_confirm.pack()

    def btn_add_net(self):
        def ret_command():
            if check_ip_pack(net_mask_entry.get()):
                print("是地址块形式")
                add_net(self.__cursor, self.__db, net_mask_entry.get(), net_name_entry.get())
            else:
                print("形式错误")
            add_net_part.destroy()

        add_net_part = tkinter.Toplevel(self.main_part)
        add_net_part.geometry('300x300')
        label_net_mask = tkinter.Label(master=add_net_part, text="添加网络（地址块）")
        net_mask_entry = tkinter.Entry(master=add_net_part)

        label_net_name = tkinter.Label(master=add_net_part, text="名称")

        net_name_entry = tkinter.Entry(master=add_net_part)

        btn_confirm = tkinter.Button(master=add_net_part, text="确认", command=ret_command)

        label_net_mask.pack()
        net_mask_entry.pack()

        label_net_name.pack()

        net_name_entry.pack()

        btn_confirm.pack()

    def btn_add_router(self):

        def add_router():
            router_name = name_entry.get()
            if (router_name == ''):
                print("名字不能为空")
                return
            sql_add_router(self.__cursor, self.__db, router_name)
            in1_ip = in1_ip_entry.get()
            in1_pack = in1_ip_pack_entry.get()
            in2_ip = in2_ip_entry.get()
            in2_pack = in2_ip_pack_entry.get()
            in3_ip = in3_ip_entry.get()
            in3_pack = in3_ip_pack_entry.get()
            in4_ip = in4_ip_entry.get()
            in4_pack = in4_ip_pack_entry.get()

            if in1_ip != '' and in1_pack != '':
                sql_add_router_int(self.__cursor, self.__db, router_name, in1_ip, in1_pack, 1)
            if in2_ip != '' and in2_pack != '':
                sql_add_router_int(self.__cursor, self.__db, router_name, in2_ip, in2_pack, 2)
            if in3_ip != '' and in3_pack != '':
                sql_add_router_int(self.__cursor, self.__db, router_name, in3_ip, in3_pack, 3)
            if in4_ip != '' and in4_pack != '':
                sql_add_router_int(self.__cursor, self.__db, router_name, in4_ip, in4_pack, 4)

            # add_router_part.destroy()

        add_router_part = tkinter.Toplevel(self.main_part)
        add_router_part.geometry("300x300")

        label_name = tkinter.Label(master=add_router_part, text="路由器名：")
        name_entry = tkinter.Entry(master=add_router_part)
        label_name.grid(row=0, column=0)
        name_entry.grid(row=0, column=1)

        label_in1_ip = tkinter.Label(master=add_router_part, text="接口1的ip：")
        in1_ip_entry = tkinter.Entry(master=add_router_part)
        label_in1_ip_pack = tkinter.Label(master=add_router_part, text="接口1连接的网络：")
        in1_ip_pack_entry = tkinter.Entry(master=add_router_part)

        label_in2_ip = tkinter.Label(master=add_router_part, text="接口2的ip：")
        in2_ip_entry = tkinter.Entry(master=add_router_part)
        label_in2_ip_pack = tkinter.Label(master=add_router_part, text="接口2连接的网络：")
        in2_ip_pack_entry = tkinter.Entry(master=add_router_part)

        label_in3_ip = tkinter.Label(master=add_router_part, text="接口3的ip：")
        in3_ip_entry = tkinter.Entry(master=add_router_part)
        label_in3_ip_pack = tkinter.Label(master=add_router_part, text="接口3连接的网络：")
        in3_ip_pack_entry = tkinter.Entry(master=add_router_part)

        label_in4_ip = tkinter.Label(master=add_router_part, text="接口4的ip：")
        in4_ip_entry = tkinter.Entry(master=add_router_part)
        label_in4_ip_pack = tkinter.Label(master=add_router_part, text="接口4连接的网络：")
        in4_ip_pack_entry = tkinter.Entry(master=add_router_part)

        btn_confirm = tkinter.Button(master=add_router_part, text="确认添加", command=add_router)

        label_in1_ip.grid(row=1, column=0)
        label_in1_ip_pack.grid(row=2, column=0)
        in1_ip_entry.grid(row=1, column=1)
        in1_ip_pack_entry.grid(row=2, column=1)

        label_in2_ip.grid(row=3, column=0)
        label_in2_ip_pack.grid(row=4, column=0)
        in2_ip_entry.grid(row=3, column=1)
        in2_ip_pack_entry.grid(row=4, column=1)

        label_in3_ip.grid(row=5, column=0)
        label_in3_ip_pack.grid(row=6, column=0)
        in3_ip_entry.grid(row=5, column=1)
        in3_ip_pack_entry.grid(row=6, column=1)

        label_in4_ip.grid(row=7, column=0)
        label_in4_ip_pack.grid(row=8, column=0)
        in4_ip_entry.grid(row=7, column=1)
        in4_ip_pack_entry.grid(row=8, column=1)

        btn_confirm.grid(row=9, column=0)


def get_nets(cursor, db):
    datas = None
    try:
        q = "SELECT * FROM net"
        cur.execute(query=q)
        datas = cur.fetchall()
        print(datas)
    except:
        print("查询出错")
    finally:
        return datas


def sql_get_router_table_by_name(name, cursor, db):
    datas = {}
    try:
        sql = 'SELECT * FROM router_table WHERE r_name=%s'
        cursor.execute(sql, name)
        datas = cursor.fetchall()
    except Exception as e:
        print(e)
    finally:
        return datas


def sql_get_router_table(id, cursor, db):
    datas = {}
    try:
        sql = 'SELECT * FROM router_table WHERE router_id=%s'
        cursor.execute(sql, id)
        datas = cursor.fetchall()
    except Exception as e:
        print(e)
    finally:
        return datas


def sql_get_all_routers(cursor, db):
    try:
        get_all_sql = "SELECT * FROM router"
        cursor.execute(get_all_sql)
        return cur.fetchall()
    except Exception as e:
        print(e)


def sql_del_tables(cursor, db):
    del_sql = 'TRUNCATE TABLE router_table'
    try:
        cursor.execute(del_sql)
        db.commit()
    except Exception as e:
        print(e)


def sql_save_tables(router_dic, tables, cursor, db):
    del_sql = 'TRUNCATE TABLE router_table'
    cursor.execute(del_sql)
    # self.id = router_id
    # self.r_name = r_name
    # self.des = des
    # self.mask = sub_mask
    # self.cost = cost
    # self.next_id = next_hop
    # INSERT
    # INTO
    # router_table(des_net, mask_code, router_id, r_name, cost, next_hop, nr_name)
    # VALUES('130.10.0.0/16', '255.255.0.0', 3, 'R2', 1, 'no', 'no');
    insert_tables_sql = 'INSERT INTO router_table (des_net,mask_code, router_id, r_name, cost, next_hop, nr_name, next_ip) VALUES (%s, %s, %s, %s, %s, %s, %s, %s)'
    try:
        for entry in tables:
            next_id = ''
            next_name = 'no'
            next_ip = 'no'
            if entry.next_id is None:
                router = router_dic[entry.id]
                dic = router.router_dic

                for i in range(4):  ##遍历四个接口
                    int_net = 'int' + str(i + 1) + '_net'
                    if dic[int_net] == entry.des:
                        next_id = int_net
                        next_name = int_net
                        break
            else:
                next_id = entry.next_id
                next_name = router_dic[entry.next_id].name
                next_ip = entry.next_ip

            cursor.execute(insert_tables_sql,
                           (entry.des, entry.mask, entry.id, entry.r_name,
                            entry.cost, next_id, next_name, next_ip))
            db.commit()
    except Exception as e:
        print(e)


def add_net(cursor, db, net_mask, net_name):
    try:
        select_query = 'SELECT * FROM net WHERE net_name=%s'
        temp_net = cursor.execute(select_query, net_name)
        if (temp_net == 0):
            add_net_query = """INSERT INTO `net` (`net_ip_mask`, `net_name`) VALUES (%s, %s)"""
            cursor.execute(add_net_query, (net_mask, net_name))
            db.commit()
        else:
            print("存在同名网络")
    except:
        print("添加网络失败")
        db.close()


def sql_add_router(cursor, db, name):
    router_query = 'SELECT * FROM router WHERE router_name=%s'

    try:
        temp_router = cursor.execute(router_query, name)
        if temp_router != 0:
            print("存在该路由器")
            return
    except:
        print("查询失败")

    add_router_insert = 'INSERT INTO router (router_name) VALUES (%s)'

    try:
        cursor.execute(add_router_insert, name)
        db.commit()
    except:
        print("添加失败")


def sql_add_router_int(cursor, db, name, ip, pack, interface):
    in_net = ''
    in_ip = ''
    if interface == 1:
        in_net = 'int1_net'
        in_ip = 'int1_ip'

    elif interface == 2:
        in_net = 'int2_net'
        in_ip = 'int2_ip'
    elif interface == 3:
        in_net = 'int3_net'
        in_ip = 'int3_ip'
    else:
        in_net = 'int4_net'
        in_ip = 'int4_ip'

    inf_alter = 'UPDATE router SET ' + in_net + '=%s,' + in_ip + '=%s WHERE router_name=%s'
    try:
        cursor.execute(inf_alter, (pack, ip, name))
        db.commit()
    except Exception as e:
        print("路由器更改失败")
        print(e)

    print("修改成功！")


def build_table(cur, db):
    sql_router_query = "SELECT * FROM router"
    sql_net_query = "SELECT * FROM net"
    cur.execute(sql_router_query)
    routers = cur.fetchall()
    cur.execute(sql_net_query)
    nets = cur.fetchall()
    print(routers)
    print(nets)
    router_dic, net_dic = build_nodes_list(routers, nets)
    ##对所有的网络结点进行广度优先遍历，就可以计算出最短路径
    tables = bfs_min_distance(router_dic, net_dic)
    # bellman_ford_min_dis(router_dic, net_dic)
    sql_save_tables(router_dic, tables, cur, db)
    print('Very OK')


def bellman_ford_min_dis(router_dic, net_dic):
    '''
    废弃！！！！ discarded
    :param router_dic: ['router_id':Router]
    :param net_dic: ['net':Net]
    :return:
    '''
    tables = []
    union_list = []
    for r in router_dic:
        union_list.append(router_dic[r])
    for n in net_dic:
        union_list.append(net_dic[n])
    for r in router_dic:
        net_pre = {}
        router_pre = {}
        min_dis_to_net = {}
        min_dis_to_router = {}
        for n in router_dic:
            min_dis_to_router[n] = 16
        for n in net_dic:
            min_dis_to_net[n] = 16
        min_dis_to_router[r] = 0
        next_hop = {}
        for i in range(len(union_list) - 1):  # 运行n(V) - 1次
            for node in union_list:
                arc = node.next
                while arc is not None:
                    if arc.from_type is NodeType.ROUTER:
                        from_dis = min_dis_to_net[arc.from_net]
                    else:
                        from_dis = min_dis_to_router[arc.from_router]

                    if arc.to_type is NodeType.NET:
                        if from_dis + 1 < min_dis_to_net[arc.to_net]:
                            net_dic[arc.to_net].set_from_router(router_dic[arc.from_router], arc.from_net)
                            min_dis_to_net[arc.to_net] = from_dis + 1
                            net_pre[arc.to_net] = router_dic[arc.from_router]
                    else:
                        if from_dis + 1 < min_dis_to_router[arc.to_router]:
                            min_dis_to_router[arc.to_router] = from_dis + 1
                    arc = arc.next


def bfs_min_distance(router_dic, net_dic):
    '''
    soul of the whole code
    :param router_dic:
    :param net_dic:
    :return:
    '''
    tables = []
    for net in net_dic:
        net_visited = {}  # 记录net结点是否遍历过
        for n in net_dic:
            net_visited[n] = False
            net_dic[n].set_from_router(None, None)  # 每次循环的时候要把from_router属性置空
        router_visited = {}  # 记录router结点是否遍历过
        for r in router_dic:
            router_visited[r] = False
        cost_to_net = {}  # 记录每个结点到网络结点的距离
        for n in net_dic:
            cost_to_net[n] = 1
        cost_to_router = {}
        for r in router_dic:
            cost_to_router[r] = 1
        net_node = net_dic[net]
        net_visited[net] = True
        t_queue = queue.Queue()
        t_queue.put(net_node)
        while not t_queue.empty():

            node = t_queue.get()
            arc = node.next
            while arc is not None:

                if arc.to_type is NodeType.NET and not net_visited[arc.to_net]:
                    net_visited[arc.to_net] = True
                    t_queue.put(net_dic[arc.to_net])
                    cost_to_net[arc.to_net] = cost_to_router[arc.from_router] + 1
                    net_dic[arc.to_net].set_from_router(node, arc.from_net)

                elif arc.to_type is NodeType.ROUTER and not router_visited[arc.to_router]:

                    router_visited[arc.to_router] = True
                    t_queue.put(router_dic[arc.to_router])
                    cost_to_router[arc.to_router] = cost_to_net[arc.from_net]

                    # pre = None if pre_router_queue.empty() else pre_router_queue.get()
                    pre_r = None if net_dic[arc.from_net] is None else net_dic[arc.from_net].from_router
                    if pre_r is not None and pre_r.id is router_dic[arc.to_router].id:
                        pre_r = None
                    pre_i = None if pre_r is None else net_dic[arc.from_net].from_ip
                    entry = TableEntry(router_id=arc.to_router,
                                       des=net, sub_mask=get_mask(net),
                                       cost=cost_to_router[arc.to_router],
                                       next_hop=None if pre_r is None else pre_r.id,
                                       r_name=router_dic[arc.to_router].name,
                                       next_ip=pre_i)
                    tables.append(entry)

                arc = arc.next
    return tables


def build_nodes_list(routers, nets):
    routerNodes = []
    for router in routers:
        rNode = Router(router['router_id'], router['router_name'], router)
        routerNodes.append(rNode)
    net_dic = {}
    for net in nets:
        nNode = Net(net['net_ip_mask'], net['net_name'])
        net_dic[net['net_ip_mask']] = nNode
    router_dic = {}
    for node in routerNodes:
        router_dic[node.id] = node
        temp_node = node
        r = node.router_dic
        for i in range(4):   # 遍历四个接口
            int_net = 'int' + str(i + 1) + '_net'
            int_ip = 'int' + str(i + 1) + '_ip'
            if r[int_net] is not None and r[int_ip] is not None:
                net_node = net_dic[r[int_net]]
                arc = Arc(NodeType.ROUTER, NodeType.NET, r[int_ip], r[int_net])
                arc.set_from_router_id(node.id)
                temp_node.next = arc
                temp_node = temp_node.next
                while net_node.next is not None:
                    net_node = net_node.next
                arc = Arc(NodeType.NET, NodeType.ROUTER, r[int_net], r[int_ip])
                arc.set_to_router_id(node.id)  # 设置目的路由器id，路由器有多个接口，只能通过id才能快速找到（其实通过数据库查找也可以）
                net_node.next = arc

    return router_dic, net_dic


if __name__ == '__main__':
    db = pymysql.connect(host='localhost', user='han1254', passwd='8282481aa', database='rip_datas')
    cur = db.cursor(pymysql.cursors.DictCursor)

    MainPart(db, cur)

    db.close()
