#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
int n, h[N];

bool check(int x) {
    for (int i = 1; i <= n; i++) {
        x = 2 * x - h[i];
        if (x < 0) return false;
        if (x >= 1e5) return true;
    }
    return true;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &h[i]);
    int l = 0, r = 1e5;
    while (l < r) {
        int mid = (l + r) >> 1;
        if (check(mid))
            r = mid;
        else
            l = mid + 1;
    }
    printf("%d", l);
    return 0;
}