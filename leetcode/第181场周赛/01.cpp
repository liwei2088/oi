#include <iostream>
#include <vector>
using namespace std;

void createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> res = vector<int>();
    for (int i = 0; i < nums.size(); i++) {
        if (index[i] == i)
            res.push_back(nums[i]);
        else
            res.insert(res.begin() + index[i], nums[i]);
    }
    for (int i = 0; i < res.size(); i++) cout << res[i];
}

int main() {
    int n, x;
    cin >> n;
    vector<int> a, b;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a.push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        cin >> x;
        b.push_back(x);
    }
    createTargetArray(a, b);
    return 0;
}