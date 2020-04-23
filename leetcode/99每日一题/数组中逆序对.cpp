#include <iostream>
#include <vector>
using namespace std;

int mergeSort(vector<int>& nums, vector<int>& t, int l, int r) {
    if (l >= r) return 0;
    int mid = (r + l) / 2;
    int res = mergeSort(nums, t, l, mid) + mergeSort(nums, t, mid + 1, r);
    int i = l, j = mid + 1;
    for (int k = l; k <= r; k++)
        if (j > r || i <= mid && nums[i] <= nums[j])
            t[k] = nums[i++];
        else
            t[k] = nums[j++], res += mid - i + 1;
    for (int i = l; i <= r; i++) nums[i] = t[i];
    return res;
}

int reversePairs(vector<int>& nums) {
    int n = nums.size();
    vector<int> t(n);
    return mergeSort(nums, t, 0, n - 1);
}

int main() {
    int x;
    vector<int> v;
    while (cin >> x) v.push_back(x);
    cout << reversePairs(v);
    return 0;
}