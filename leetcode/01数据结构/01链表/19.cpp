/*
    19. 删除链表的倒数第N个节点
    给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。
    示例：
    给定一个链表: 1->2->3->4->5, 和 n = 2.
    当删除了倒数第二个节点后，链表变为 1->2->3->5.
    说明：
    给定的 n 保证是有效的。
*/
#include <iostream>
using namespace std;
//链表的结构体
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
//第一种方法 通过两次循环求解
// ListNode* removeNthFromEnd(ListNode* head, int n) {
//     //创建一个哑结点 指向第一个元素 主要是方便删除第一个元素
//     //在数据结构链表中经常创建一个没有实际意义的head节点用来指向第一个节点
//     ListNode* dummy = new ListNode(0);
//     dummy->next = head;
//     //通过循环求链表的长度
//     int length = 0;
//     ListNode* p = head;
//     while (p) {
//         length++;
//         p = p->next;
//     }
//     //计算从头开始到删除节点的前一个节点，注意是前一个节点
//     int k = length - n;
//     //移动到待删除节点的前一个节点
//     p = dummy;
//     while (k > 0) {
//         k--;
//         p = p->next;
//     }
//     //删除节点
//     p->next = p->next->next;
//     //返回第一个节点 注意不能返回哑结点
//     return dummy->next;
// }

//第二种解法 其实是一个双指针算法
ListNode* removeNthFromEnd(ListNode* head, int n) {
    //定义一个哑结点指向链表的第一个元素
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    //first表示快指针，second表示慢指针
    ListNode *first = dummy, *second = dummy;
    //现将快指针移动 n+1 个位置
    for (int i = 1; i <= n + 1; i++) first = first->next;
    //当快指针指向最后一个元素时，慢指针正好到达待删除节点的前一个节点
    while (first) {
        first = first->next;
        second = second->next;
    }
    //删除节点
    second->next = second->next->next;
    return dummy->next;
}

int main() {
    int x, n;
    cin >> n;
    ListNode* head = new ListNode(0);
    ListNode* p = head;
    while (cin >> x) {
        ListNode* node = new ListNode(x);
        p->next = node;
        p = node;
    }
    head = removeNthFromEnd(head->next, n);
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}