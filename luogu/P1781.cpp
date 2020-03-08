#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

struct president {
    int no;
    string s;
} a[30];

int n;

bool cmp(president x, president y) {
    int lx = x.s.length();
    int ly = y.s.length();
    if (lx > ly) return true;
    if (lx == ly && x.s > y.s) return true;
    return false;
}

int main() {
    int i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        a[i].no = i;
        cin >> a[i].s;
    }
    sort(a + 1, a + n + 1, cmp);
    cout << a[1].no << endl << a[1].s << endl;
    system("pause");
    return 0;
}