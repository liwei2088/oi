#include <iostream>
#include <vector>
using namespace std;

/*
状态定义：
    dp[i][j]表示word1的前i个字母转换成word2的前j个字母所使用的最少操作。
状态转移：
    i指向word1，j指向word2
    若当前字母相同，则dp[i][j] = dp[i - 1][j - 1];
    否则取增删替三个操作的最小值 + 1， 即:
    dp[i][j] = min(dp[i][j - 1], dp[i - 1][j], dp[i-1][j-1]) + 1。
*/
int minDistance(string word1, string word2) {
    int n = word1.size(), m = word2.size();
    if (n == 0) return m;
    if (m == 0) return n;
    vector<vector<int> > dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i <= n; i++) dp[i][0] = i;
    for (int i = 0; i <= m; i++) dp[0][i] = i;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            if (word1[i - 1] == word2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] =
                    min(min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]) + 1;
        }
    return dp[n][m];
}

int main() {
    string a, b;
    cin >> a >> b;
    cout << minDistance(a, b);
    return 0;
}