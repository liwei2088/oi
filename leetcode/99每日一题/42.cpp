#include <iostream>
#include <vector>
using namespace std;

//第一种方法 暴力枚举
// int trap(vector<int>& height) {
//     int n = height.size(), ans = 0;
//     for (int i = 0; i < n; i++) {
//         int ltmx = 0, rtmx = 0;
//         cout << "i:" << i << " ";
//         for (int j = 0; j <= i; j++) ltmx = max(ltmx, height[j]);
//         for (int j = i; j < n; j++) rtmx = max(rtmx, height[j]);
//         cout << ltmx << " " << rtmx << " " << min(ltmx, rtmx) - height[i]
//              << endl;
//         ans += min(ltmx, rtmx) - height[i];
//     }
//     return ans;
// }

//方法2：提前预处理最大值到左右数组 然后直接一次遍历
// int trap(vector<int>& height) {
//     if (height.size() == 0) return 0;
//     int n = height.size(), ans = 0;
//     vector<int> ltmx(n + 5), rtmx(n + 5);
//     ltmx[0] = height[0];
//     for (int i = 1; i < n; i++) ltmx[i] = max(height[i], ltmx[i - 1]);
//     rtmx[n - 1] = height[n - 1];
//     for (int i = n - 2; i >= 0; i--) rtmx[i] = max(height[i], rtmx[i + 1]);
//     for (int i = 1; i < n - 1; i++) ans += min(ltmx[i], rtmx[i]) - height[i];
//     return ans;
// }

//双指针
int trap(vector<int>& height) {
    int l = 0, r = height.size() - 1, ans = 0;
    int lmx = 0, rmx = 0;
    while (l < r) {
        if (height[l] < height[r]) {
            height[l] >= lmx ? (lmx = height[l]) : ans += (lmx - height[l]);
            l++;
        } else {
            height[r] >= rmx ? (rmx = height[r]) : ans += (rmx - height[r]);
            r--;
        }
    }
    return ans;
}

int main() {
    vector<int> v;
    int x;
    while (cin >> x) v.push_back(x);
    cout << trap(v);
    return 0;
}