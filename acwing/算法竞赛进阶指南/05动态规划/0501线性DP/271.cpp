#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
const int N = 31;
int s[10];
long long f[N][N][N][N][N];
int main() {
    int n;
    while (cin >> n && n) {
        memset(s, 0, sizeof(s));
        for (int i = 1; i <= n; i++) cin >> s[i];
        memset(f, 0, sizeof(f));
        f[0][0][0][0][0] = 1;
        for (int a = 0; a <= s[1]; a++)
            for (int b = 0; b <= min(a, s[2]); b++)
                for (int c = 0; c <= min(b, s[3]); c++)
                    for (int d = 0; d <= min(c, s[4]); d++)
                        for (int e = 0; e <= min(d, s[5]); e++) {
                            // 其实就是要确保f[a-1][b][c][d][e]状态是有效的
                            // 因为题目要求前一行人数>=后一行人数 所以如果a-1>=b
                            if (a && a - 1 >= b)
                                f[a][b][c][d][e] += f[a - 1][b][c][d][e];
                            if (b && b - 1 >= c)
                                f[a][b][c][d][e] += f[a][b - 1][c][d][e];
                            if (c && c - 1 >= d)
                                f[a][b][c][d][e] += f[a][b][c - 1][d][e];
                            if (d && d - 1 >= e)
                                f[a][b][c][d][e] += f[a][b][c][d - 1][e];
                            if (e) f[a][b][c][d][e] += f[a][b][c][d][e - 1];
                        }
        cout << f[s[1]][s[2]][s[3]][s[4]][s[5]] << endl;
    }
    return 0;
}