/**
 * 搜索可以实现一部分
 * 动态规划
 */

#include <iostream>
using namespace std;
int n, f[2005];

int main() {
    cin >> n;
    f[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j * j <= i; j++) 
            f[i] += f[i - j * j];

    for (int i = 1; i <= n; i++) cout << f[i] << " ";
    cout << endl;
    cout << f[n];
    return 0;
}