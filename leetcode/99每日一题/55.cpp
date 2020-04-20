#include <iostream>
#include <vector>
using namespace std;
bool canJump(vector<int>& nums) {
    if (nums.size() == 1) return true;
    int d = 0, last = nums.size() - 1;
    for (int i = 0; i < nums.size() - 1; i++) {
        //某个位置能否进行跳跃 要看从第1个位置是否能够走到
        //如果无法走到，不存在判断是否跳跃
        if (i <= d) {
            d = max(d, i + nums[i]);
            if (d >= last) return true;
        } else {
            return false;
        }
    }
    return false;
}
int main() {
    int x;
    vector<int> t;
    while (cin >> x) t.push_back(x);
    if (canJump(t))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}