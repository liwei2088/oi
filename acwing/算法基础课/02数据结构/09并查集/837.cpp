#include <iostream>
using namespace std;
const int N = 100005;
int n, m;
int p[N], s[N];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    char op[2];
    int x, y;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) p[i] = i, s[i] = 1;
    while (m--) {
        cin >> op;
        if (op[0] == 'C') {
            cin >> x >> y;
            if (find(x) == find(y)) continue;
            s[find(y)] += s[find(x)];
            p[find(x)] = find(y);
        } else if (op[1] == '1') {
            cin >> x >> y;
            if (find(x) == find(y))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        } else {
            cin >> x;
            cout << s[find(x)] << endl;
        }
    }
    return 0;
}