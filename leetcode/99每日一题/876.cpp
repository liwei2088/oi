#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};
//方法1：首先遍历链表所有元素放到数组中
//      然后直接通过数组下标访问中间位置元素
// ListNode* middleNode(ListNode* head) {
//     vector<ListNode*> a;
//     a.push_back(head);
//     while (a.back()->next != NULL) {
//         a.push_back(a.back()->next);
//     }
//     return a[a.size() / 2];
// }

//方法：快慢指针，快指针每次移动2个元素 慢指针移动1个元素
ListNode* middleNode(ListNode* head) {
    ListNode *fast = head, *slow = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main() {
    int x;
    ListNode *head, *p;
    head = new ListNode(0);
    p = head;
    while (cin >> x) {
        ListNode* n = new ListNode(x);
        p->next = n;
        p = n;
    }
    p = middleNode(head);
    while (p != NULL) {
        cout << p->val << " ";
        p = p->next;
    }
    return 0;
}