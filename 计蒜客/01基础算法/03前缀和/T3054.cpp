#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
typedef pair<int, int> PII;
const int N = 1e5 + 5;
int n, q;
long long a[N], v[N];
int main() {
    int t;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; i++) {
        scanf("%lld%lld", &a[i], &v[i]);
        a[i] += a[i - 1];
    }
    while (q--) {
        scanf("%d", &t);
        for (int i = 1; i <= n; i++)
            if (t <= a[i]) {
                printf("%lld\n", v[i]);
                break;
            }
    }
    return 0;
}