#include <iostream>
#include <vector>
using namespace std;

//使用一维数组 动态规划
// int massage(vector<int>& nums) {
//     int n = nums.size();
//     if (n == 0) return 0;
//     if (n == 1) return nums[0];
//     vector<int> dp(n);
//     dp[0] = nums[0];
//     dp[1] = max(nums[0], nums[1]);
//     for (int i = 2; i < n; i++) dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
//     return dp[n - 1];
// }

int massage(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) return nums[0];
    if (n == 2) return max(nums[0], nums[1]);
    int f0 = nums[0], f1 = max(nums[0], nums[1]), f2;
    for (int i = 2; i < n; i++) {
        f2 = max(f1, f0 + nums[i]);
        f0 = f1;
        f1 = f2;
    }
    return f2;
}

int main() {
    int x;
    vector<int> a;
    while (cin >> x) a.push_back(x);
    cout << massage(a);
    return 0;
}