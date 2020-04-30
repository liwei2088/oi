#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// void dfs(vector<int>& nums, vector<vector<int>>& res, int k) {
//     if (k == nums.size()) {
//         res.push_back(nums);
//         return;
//     }
//     for (int i = k; i < nums.size(); i++) {
//         swap(nums[i], nums[k]);
//         dfs(nums, res, k + 1);
//         swap(nums[i], nums[k]);
//     }
//     return;
// }

// vector<vector<int>> permute(vector<int>& nums) {
//     vector<vector<int>> res;
//     dfs(nums, res, 0);
//     return res;
// }

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    do {
        res.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return res;
}

int main() {
    int x;
    vector<int> t;
    while (cin >> x) t.push_back(x);
    vector<vector<int>> res = permute(t);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < t.size(); j++) cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}