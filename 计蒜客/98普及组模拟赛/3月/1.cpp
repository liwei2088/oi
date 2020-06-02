#include <iostream>
using namespace std;
long long f[62][62], n;
int main() {
    f[1][1] = 1;
    for (int i = 2; i <= 61; i++) {
        f[i][1] = f[i][i] = 1;
        for (int j = 2; j <= i - 1; j++)
            f[i][j] = f[i - 1][j - 1] + f[i - 1][j];
    }
    cin >> n;
    cout << "(a+b)^" << n << "=";
    for (int i = n; i >= 0; i--) {
        if (i != n) cout << "+";
        if (f[n + 1][i + 1] != 1) cout << f[n + 1][i + 1];
        if (i != 0) {
            cout << "a";
            if (i != 1) cout << "^" << i;
        }
        if (i != n) {
            cout << "b";
            if (i != n - 1) cout << "^" << n - i;
        }
    }
    return 0;
}