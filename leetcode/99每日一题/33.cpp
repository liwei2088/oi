#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size();
    if (n == 0) return -1;
    if (n == 1) return nums[0] == target ? 0 : -1;
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = (l + r) >> 1;
        if (nums[m] == target) return m;
        if (nums[m] >= nums[l]) {  //左侧有序
            if (target >= nums[l] && target < nums[m])
                r = m - 1;
            else
                l = m + 1;
        } else {
            if (target > nums[m] && target <= nums[r])
                l = m + 1;
            else
                r = m - 1;
        }
    }
    return -1;
}

int main() {
    int x;
    vector<int> t;
    while (cin >> x) t.push_back(x);
    int k;
    cin >> k;
    cout << search(t, k);
    return 0;
}