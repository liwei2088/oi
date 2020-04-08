/*
    496. 下一个更大元素 I
    给定两个没有重复元素的数组 nums1
   和 nums2 ，其中nums1 是 nums2 的子集。找到 nums1 中每个元素在 nums2 中的下一个比其大的值。
    nums1 中数字 x 的下一个更大元素是指 x 在 nums2 中对应位置的右边的第一个比 x 大的元素。如果不存在，对应位置输出-1。
*/
#include <iostream>
#include <map>
#include <stack>
#include <vector>
using namespace std;

//该题同样使用单调栈，先处理nums2将所有值之后的较大值位置保存到哈希表（map）中
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> stk;
    map<int, int> mp;
    vector<int> res;
    //先预处理nums2中每个元素之后的较大值位置
    for (int i = 0; i < nums2.size(); i++) {
        while (!stk.empty() && nums2[i] > stk.top()) {
            mp.insert(make_pair(stk.top(), nums2[i]));
            stk.pop();
        }
        stk.push(nums2[i]);
    }
    //栈中的数据表示之后没有较大值 所以全部设置为-1
    while (!stk.empty()) {
        mp.insert(make_pair(stk.top(), -1));
        stk.pop();
    }
    for (int i = 0; i < nums1.size(); i++) res.push_back(mp[nums1[i]]);
    return res;
}

int main() {
    int n, m, x;
    vector<int> a, b;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a.push_back(x);
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> x;
        b.push_back(x);
    }
    vector<int> c = nextGreaterElement(a, b);
    for (int i = 0; i < c.size(); i++) cout << c[i] << " ";
    return 0;
}