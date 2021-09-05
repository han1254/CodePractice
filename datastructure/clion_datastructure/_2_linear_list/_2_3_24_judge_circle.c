//
// Created by 12547 on 2021/9/5.
//

#include "LinkListImpl.h"

/**
 * 有无头结点，无所谓
 * 这个算法经过了Leetcode验证
 * https://leetcode-cn.com/problems/linked-list-cycle-ii/submissions/
 * 执行结果：
通过
显示详情
添加备注

执行用时：
8 ms
, 在所有 C 提交中击败了
61.29%
的用户
内存消耗：
7.2 MB
, 在所有 C 提交中击败了
10.87%
的用户
 * @param L
 * @return
 */
LinkList judge_circle(LinkList L) {
    LNode *slow = L;
    LNode *fast = L;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;//先走再判断，否则第一步就直进入判断了
        if (slow == fast) {//有环
            LNode *temp = L;
            while(temp != slow) {
                slow = slow->next;
                temp = temp->next;
            }
            return slow;
        }

    }
    return NULL;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//struct ListNode *detectCycle(struct ListNode *head) {
//    struct ListNode *slow = head;
//    struct ListNode *fast = head;
//    while(fast != NULL && fast->next != NULL) {
//        slow = slow->next;
//        fast = fast->next->next;//先走再判断，否则第一步就直进入判断了
//        if (slow == fast) {//有环
//            struct ListNode *temp = head;
//            while(temp != slow) {
//                slow = slow->next;
//                temp = temp->next;
//            }
//            return slow;
//        }
//
//    }
//    return NULL;
//}

int main() {
    int a[5] = {1,2, 3, 4, 5};
    int b[6] = {7, 8, 9, 10, 11, 12};
    LinkList L1 = CreateList(a, 5);
    LinkList tail = L1;
    while(tail->next != NULL) tail = tail->next;
    tail->next = CreateCycleListWithoutHead(b, 6);

    printf("%d", judge_circle(L1)->data);
}