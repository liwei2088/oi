#include <cmath>
#include <iostream>
using namespace std;
int n, m;
struct node {
    string name;
    int c, k;
} a[1005];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i].name >> a[i].c;
    for (int i = 1; i <= m; i++) {
        string s;
        cin >> s;
        for (int j = 1; j <= n; j++)
            if (a[j].name == s) a[j].k++;
    }
    int ans1 = 0, ans2 = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i].k < ceil(a[i].c / 2.0)) {
            ans1++;
            ans2 += a[i].k;
        } else if (a[i].k > a[i].c) {
            ans2 += a[i].k - a[i].c;
        }
    }
    cout << ans1 << endl << ans2;
    return 0;
}