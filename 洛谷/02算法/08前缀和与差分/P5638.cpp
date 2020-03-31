#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1000005;
int n, k;
long long a[N];
int main() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i < n; i++) {
        scanf("%lld", &a[i]);
        a[i] += a[i - 1];
    }
    long long t = 0;
    for (int i = 1; i <= n - k; i++) {
        t = max(t, a[i + k - 1] - a[i - 1]);
    }
    cout << a[n - 1] - t;
    return 0;
}