#include <algorithm>
#include <iostream>
using namespace std;
const int N = 100005;
struct node {
    int no, f, g;
} q[N];
int n, m;

bool cmp(node x, node y) {
    if (x.f == y.f) return x.no < y.no;
    return x.f < y.f;
}

int main() {
    int x, y;
    cin >> n >> m;
    int s = 0, c = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        s += y;
        q[i].f = x;
        q[i].g = y;
        q[i].no = i;
        if (s >= m) {
            c = i;
            break;
        }
    }
    cout << c << endl;
    sort(q + 1, q + c + 1, cmp);
    for (int i = 1; i <= c; i++) cout << q[i].no << " ";
    return 0;
}