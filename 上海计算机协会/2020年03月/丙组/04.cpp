#include <iostream>
using namespace std;
const int N = 100005;
int n, a[N], l[N], r[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    a[0] = a[n + 1] = l[0] = r[n + 1] = 1;
    for (int i = 1; i <= n; i++) l[i] = (l[i - 1] * a[i]) % 10000;
    for (int i = n; i >= 1; i--) r[i] = (r[i + 1] * a[i]) % 10000;
    for (int i = 1; i <= n; i++) cout << (l[i - 1] * r[i + 1]) % 10000 << endl;
    return 0;
}