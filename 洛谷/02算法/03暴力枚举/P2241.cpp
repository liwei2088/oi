/**
 * https://www.luogu.com.cn/problem/solution/P2241
 * 长方形+正方形的总数 = (1+2+3+...+n)*(1+2+3+...+m)
 * 正方形的总数 = n*m+(n-1)*(m-1)+(n-2)*(m-3)...
 * n*m表示长度为1的方格数量  (n-1)*(m-1) 表示长度为2的方格数量
 */

#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    long long sum = n * m * (n + 1) * (m + 1) / 4;
    long long a = n, b = m;
    long long x = 0;
    while (a != 0 && b != 0) {
        x += a * b;
        a--, b--;
    }
    cout << x << " " << sum - x;
    return 0;
}