#include <algorithm>
#include <iostream>
using namespace std;
int n;
struct node {
    string s;
    int xh;
} a[105];

int f(string x) {
    int res = 0;
    for (int i = 0; i < x.size(); i++)
        if (x[i] == '1') res++;
    return res;
}

bool cmp(node x, node y) {
    if (f(x.s) < f(y.s)) return true;
    if (f(x.s) == f(y.s) && x.xh < y.xh) return true;
    return false;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].s;
        a[i].xh = i;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) cout << a[i].s << endl;
    return 0;
}