#include <iostream>
using namespace std;
int n, p, m;
int a[5005];

int find(int x) {
    if (a[x] != x) a[x] = find(a[x]);
    return a[x];
}

int main() {
    int x, y;
    cin >> n >> m >> p;
    for (int i = 1; i <= n; i++) a[i] = i;
    while (m--) {
        cin >> x >> y;
        a[find(x)] = find(y);
    }
    while (p--) {
        cin >> x >> y;
        if (find(x) == find(y))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}