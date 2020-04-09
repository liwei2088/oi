#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<string>& res, string cur, int ltNum, int rtNum, int n) {
    if (ltNum == n && rtNum == n) res.push_back(cur);
    if (ltNum < n) dfs(res, cur + "(", ltNum + 1, rtNum, n);
    if (rtNum < ltNum) dfs(res, cur + ")", ltNum, rtNum + 1, n);
}

vector<string> generateParenthesis(int n) {
    vector<string> res;
    dfs(res, "", 0, 0, n);
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<string> ans = generateParenthesis(n);
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << endl;
    return 0;
}