#include <iostream>
using namespace std;
int f[25][25];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        f[i][1] = 1;
        for (int j = 2; j < i; j++) {
            f[i][j] = f[i - 1][j - 1] + f[i - 1][j];
        }
        f[i][i] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << f[i][j] << " ";
        cout << endl;
    }
    return 0;
}