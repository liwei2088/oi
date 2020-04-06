/*
    83. 删除排序链表中的重复元素
    给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
    示例 1:
    输入: 1->1->2
    输出: 1->2
    示例 2:
    输入: 1->1->2->3->3
    输出: 1->2->3
*/
#include <iostream>
using namespace std;
//链表的结构体
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* deleteDuplicates(ListNode* head) {
    ListNode* cur = head;
    //遍历链表 注意循环条件 确保 cur 和 cur->next 都不会空
    while (cur && cur->next) {
        //如果cur和cur->next的值相同，则删除
        //注意删除后不能移动cur 因为可能有多个连续相同数据
        if (cur->val == cur->next->val) {
            cur->next = cur->next->next;
            continue;
        }
        cur = cur->next;
    }
    return head;
}

int main() {
    int x;
    ListNode* head = new ListNode(0);
    ListNode* p = head;
    while (cin >> x) {
        ListNode* node = new ListNode(x);
        p->next = node;
        p = node;
    }
    head = deleteDuplicates(head->next);
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}