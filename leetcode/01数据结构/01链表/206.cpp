/*
    206. 反转链表
    反转一个单链表。
    示例:
    输入: 1->2->3->4->5->NULL
    输出: 5->4->3->2->1->NULL
*/
#include <iostream>
using namespace std;
//定义链表结构体
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head) {
    // pre 保存前驱节点的信息  cur 保存当前节点信息
    //因为第一个节点翻转后是最后一个节点 应该指向NULL
    //所以 pre 初值要指向 NULL
    ListNode *cur = head, *pre = NULL;
    while (cur) {
        //需要暂存后继节点，因为一段翻转后
        //通过当前节点无法再访问后继节点了
        ListNode* next = cur->next;
        //翻转就是讲当前节点指向前驱节点
        cur->next = pre;
        //将两个指针后移为下一个节点做准备
        pre = cur;
        cur = next;
    }
    //因为最后cur指向NULL 所以返回cur的前驱节点pre
    return pre;
}
int main() {
    ListNode* head = new ListNode(0);
    ListNode* p = head;
    int x;
    while (cin >> x) {
        ListNode* node = new ListNode(x);
        p->next = node;
        p = node;
    }
    head = reverseList(head->next);
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}
