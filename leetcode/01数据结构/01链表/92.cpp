/*
    92. 反转链表 II
    反转从位置 m 到 n 的链表。请使用一趟扫描完成反转。
    说明:
    1 ≤ m ≤ n ≤ 链表长度。
*/
#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseBetween(ListNode* head, int m, int n) {
    if (m == n) return head;
    //创建哑节点 方便对头节点的操作
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* p = dummy;
    //将指针移动到m-1的位置
    for (int i = 0; i < m - 1; i++) p = p->next;
    ListNode *pre = p->next, *cur = p->next->next;
    //注意从m+1开始， m不需要指向前驱指针，因为最后翻转后应该指向n+1
    for (int i = m + 1; i <= n; i++) {
        ListNode* next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
    //p->next->next应该是指向n+1节点
    p->next->next = cur;
    //p->next 指向 n节点
    p->next = pre;
    return dummy->next;
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
    int m, n;
    cin >> m >> n;
    head = reverseBetween(head->next, m, n);
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}