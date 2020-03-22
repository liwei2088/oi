#include <iostream>
#include <vector>
using namespace std;

int sumFourDivisors(vector<int>& nums) {
    int res = 0;
    vector<int> t;
    for (int i = 0; i < nums.size(); i++) {
        t.clear();
        for (int j = 2; j * j <= nums[i]; j++) {
            if (nums[i] % j == 0) {
                t.push_back(j);
                if (j != nums[i] / j) t.push_back(nums[i] / j);
            }
            if (t.size() > 2) break;
        }
        if (t.size() == 2) res += 1 + t[0] + t[1] + nums[i];
    }
    return res;
}

int main() {
    int x;
    vector<int> a;
    while (cin >> x) a.push_back(x);
    cout << sumFourDivisors(a);
    return 0;
}