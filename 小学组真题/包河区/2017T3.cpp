/**
 * 卡特兰数
 */
#include <iostream>
using namespace std;
int n, f[2005];
int main() {
    cin >> n;
    f[0] = 1, f[1] = 1;
    for (int i = 2; i <= n; i++)
        for (int j = 0; j < i; j++) f[i] += f[j] * f[i - j - 1];
    cout << f[n];
    return 0;
}