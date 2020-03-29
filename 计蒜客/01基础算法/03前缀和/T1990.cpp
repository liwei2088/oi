#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
struct node {
    int x, y;
} a[100005];
int n;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].x >> a[i].y;
    int mi = 1e9, ans = 0;
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= n; j++)
            sum += abs(a[i].x - a[j].x) + abs(a[i].y - a[j].y);
        if (mi > sum) {
            mi = sum;
            ans = i;
        }
    }
    cout << ans;
    return 0;
}