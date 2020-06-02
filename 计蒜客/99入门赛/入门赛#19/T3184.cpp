#include <iostream>
using namespace std;
int m, k;

//枚举约数 求出约数出现次数 然后乘以余数求和 较之暴力的方法更优化
long long work(int n) {
    long long res = 0;
    for (int i = 1; i <= n; i++) res += (n / i) * 1ll * i;
    return res;
}

int main() {
    cin >> m >> k;
    int x = m / k;
    int y = m % k;
    cout << x * 1ll * work(k) + work(y);
    return 0;
}