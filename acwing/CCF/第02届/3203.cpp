#include <cstdio>
#include <iostream>
using namespace std;
const int N = 105;
int n;
bool st[N][N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i <= x2; i++)
            for (int j = y1; j <= y2; j++) st[i][j] = true;
    }
    int ans = 0;
    for (int i = 0; i <= 100; i++)
        for (int j = 0; j <= 100; j++)
            if (st[i][j]) ans++;
    cout << ans;
    return 0;
}