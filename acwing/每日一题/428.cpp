#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    // n[10,1000] 1000转换为二进制最高10位
    int ans = 0;
    for (int i = 0; i <= 10; i++)
        if ((n >> i) & 1) ans += pow(k, i);
    cout << ans;
    return 0;
}