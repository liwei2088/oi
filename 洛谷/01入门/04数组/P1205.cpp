#include <cstring>
#include <iostream>
using namespace std;
int n;
char a[15][15], b[15][15], c[15][15], d[15][15];

bool check() {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (b[i][j] != c[i][j]) return false;
    return true;
}

bool work(int k) {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (k == 1)
                b[j][n - i + 1] = a[i][j];
            else if (k == 2)
                b[n - i + 1][n - j + 1] = a[i][j];
            else if (k == 3)
                b[n - j + 1][i] = a[i][j];
            else if (k == 4)
                b[i][n - j + 1] = a[i][j];
    return check();
}

bool work5() {
    work(4);
    memcpy(d, b, sizeof(a));
    memcpy(a, d, sizeof(a));
    if (work(1)) return true;
    memcpy(a, d, sizeof(a));
    if (work(2)) return true;
    memcpy(a, d, sizeof(a));
    if (work(3)) return true;
    return false;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) cin >> c[i][j];
    if (work(1))
        cout << 1;
    else if (work(2))
        cout << 2;
    else if (work(3))
        cout << 3;
    else if (work(4))
        cout << 4;
    else if (work5())
        cout << 5;
    else if (check())
        cout << 6;
    else
        cout << 7;
    return 0;
}