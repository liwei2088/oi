#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int n;
struct node {
    int x, y, z;
} a[50005];

bool cmp(node a, node b) { return a.z < b.z; }
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].x >> a[i].y >> a[i].z;
    sort(a + 1, a + n + 1, cmp);
    double s;
    for (int i = 1; i < n; i++) {
        s += sqrt((a[i].x - a[i + 1].x) * (a[i].x - a[i + 1].x) +
                  (a[i].y - a[i + 1].y) * (a[i].y - a[i + 1].y) +
                  (a[i].z - a[i + 1].z) * (a[i].z - a[i + 1].z));
    }
    printf("%.3lf", s);
    return 0;
}