#include <iostream>
using namespace std;
long long n, m, a, b, c;
int main() {
    cin >> n >> m >> a >> b >> c;
    long long ans = n * a + m * b;
    for (int i = 1; i <= min(n, m); i++)
        ans = max(ans, i * c * 2 + (n - i) * a + (m - i) * b);
    cout << ans;
    return 0;
}