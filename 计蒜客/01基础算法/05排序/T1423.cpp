#include <algorithm>
#include <iostream>
using namespace std;
int n;
struct node {
    long long x;
    int c;
} a[55];

int f(long long x) {
    long long res = 0;
    while (x % 3 == 0) x /= 3, res++;
    return res;
}

bool cmp(node a, node b) {
    if (a.c > b.c) return true;
    if (a.c == b.c && a.x < b.x) return true;
    return false;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x;
        a[i].c = f(a[i].x);
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) cout << a[i].x << " ";
    return 0;
}