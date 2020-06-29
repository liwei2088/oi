#include <iostream>
using namespace std;
const int N = 10005;
int n, x, y;
struct node {
    int a, b, g, k;
} q[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> q[i].a >> q[i].b >> q[i].g >> q[i].k;
    cin >> x >> y;
    for (int i = n; i >= 1; i--)
        if (x >= q[i].a && x <= q[i].a + q[i].g && y >= q[i].b &&
            y <= q[i].b + q[i].k) {
            cout << i;
            return 0;
        }
    cout << -1;
    return 0;
}