from enum import Enum
from my_utils import *


class NodeType(Enum):
    ROUTER = 1
    NET = 2


class Router:
    def __init__(self, id, router_name, router_dic):
        self.id = id
        self.name = router_name
        self.router_dic = router_dic
        self.next = None  # list of class Arc


class Net:
    def __init__(self, net, net_name):
        self.net = net
        self.mask = get_mask(net)
        self.name = net_name
        self.next = None  # list of class Arc
        self.from_router = None
        self.from_ip = None

    def set_from_router(self, router, ip):
        self.from_router = router
        self.from_ip = ip


class Arc():
    def __init__(self, from_type, to_type, from_net, to_net):
        self.from_type = from_type
        self.to_type = to_type
        self.from_net = from_net
        self.to_net = to_net
        self.next = None
        self.from_router = -1  # 默认是-1
        self.to_router = -1  # 默认是-1

    def set_to_router_id(self, router_id):
        """
        如果指向的是一个Router的话，我需要知道指向的是哪一个
        :param router_id:
        :return:
        """
        self.to_router = router_id

    def set_from_router_id(self, router_id):
        """
        如果来自一个Router，我需要知道来自哪个router
        :param router_id:
        :return:
        """
        self.from_router = router_id


class TableEntry():
    def __init__(self, router_id, r_name, des, sub_mask, cost, next_hop, next_ip):
        self.id = router_id
        self.r_name = r_name
        self.des = des
        self.mask = sub_mask
        self.cost = cost
        self.next_id = next_hop
        self.next_ip = next_ip
