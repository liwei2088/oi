#include <iostream>
#include <vector>
using namespace std;

vector<int> singleNumbers(vector<int>& nums) {
    int x = 0;
    for (int i = 0; i < nums.size(); i++) x ^= nums[i];
    int low = x & (-x);
    int a = 0, b = 0;
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] & low)
            a ^= nums[i];
        else
            b ^= nums[i];
    return vector<int>{a, b};
}

int main() {
    int x;
    vector<int> v;
    while (cin >> x) v.push_back(x);
    vector<int> res = singleNumbers(v);
    for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
    return 0;
}