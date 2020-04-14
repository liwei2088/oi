#include <iostream>
#include <stack>
using namespace std;
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    stack<int> stk1, stk2;
    while (l1) stk1.push(l1->val), l1 = l1->next;
    while (l2) stk2.push(l2->val), l2 = l2->next;
    int t = 0;
    ListNode* head = NULL;
    while (!stk1.empty() || !stk2.empty() || t) {
        if (!stk1.empty()) t += stk1.top(), stk1.pop();
        if (!stk2.empty()) t += stk2.top(), stk2.pop();
        ListNode* p = new ListNode(t % 10);
        p->next = head;
        head = p;
        t /= 10;
    }
    return head;
}
int main() {
    int n, m, x;
    cin >> n;
    ListNode *h1 = new ListNode(0), *h2 = new ListNode(0);
    ListNode* p = h1;
    while (n--) {
        cin >> x;
        ListNode* node = new ListNode(x);
        p->next = node;
        p = node;
    }
    cin >> m;
    p = h2;
    while (m--) {
        cin >> x;
        ListNode* node = new ListNode(x);
        p->next = node;
        p = node;
    }
    ListNode* head = addTwoNumbers(h1->next, h2->next);
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}