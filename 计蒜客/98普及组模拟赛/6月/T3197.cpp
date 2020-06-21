#include <algorithm>
#include <iostream>
using namespace std;
const int N = 10005;
int n, x0, y0, x, y;
struct node {
    int a, b;
} q[N];

bool cmp(node x, node y) { return x.a < y.a; }

int main() {
    cin >> n >> x0 >> y0 >> x >> y;
    for (int i = 1; i <= n; i++) cin >> q[i].a >> q[i].b;
    sort(q + 1, q + n + 1, cmp);
    bool f = true;
    for (int i = 1; i <= n; i++) {
        x0 -= q[i].a - q[i - 1].a;
        while (x0 < 0 && y0 >= y) {
            y0 -= y;
            x0 += x;
        }
        if (x0 < 0) {
            f = false;
            break;
        }
        y0 -= q[i].b;
        while (y0 < 0 && x0 >= x) {
            x0 -= x;
            y0 += y;
        }
        if (y0 < 0) {
            f = false;
            break;
        }
    }
    if (f == false)
        cout << "0";
    else {
        cout << "1" << endl;
        while (x0 < 0 && y0 >= y) {
            y0 -= y;
            x0 += x;
        }
        cout << x0;
    }
    return 0;
}