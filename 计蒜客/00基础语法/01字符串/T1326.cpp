#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char g[1005][1005];
int n;
string s;
int main() {
    cin >> n;
    getchar();
    getline(cin, s);
    int k = ceil(s.size() * 1.0 / n);
    int u = 0;
    for (int i = 1; i <= k; i++)
        for (int j = 1; j <= n; j++)
            if (u < s.size())
                g[i][j] = s[u++];
            else
                g[i][j] = ' ';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) cout << g[k - j + 1][i];
        cout << endl;
    }

    return 0;
}