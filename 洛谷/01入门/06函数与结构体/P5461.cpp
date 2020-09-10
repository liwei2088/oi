#include <iostream>
using namespace std;
int n, a[1030][1030];

void f(int k, int x, int y) {
    if (k == 2) {
        a[x][y] = 0;
        return;
    }
    for (int i = x; i <= x + k / 2 - 1; i++)
        for (int j = y; j <= y + k / 2 - 1; j++) a[i][j] = 0;
    f(k / 2, x + k / 2, y);
    f(k / 2, x + k / 2, y + k / 2);
    f(k / 2, x, y + k / 2);
}

int main() {
    cin >> n;
    n = 1 << n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) a[i][j] = 1;
    f(n, 1, 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}