#include <cstdio>
#include <iostream>
using namespace std;
int v[] = {0, 10, 20, 50, 100};
int m, f[1005];
int main() {
    cin >> m;
    f[0] = 1;
    for (int i = 1; i <= 4; i++)
        for (int j = v[i]; j <= m; j++) f[j] += f[j - v[i]];
    cout << f[m];
    return 0;
}