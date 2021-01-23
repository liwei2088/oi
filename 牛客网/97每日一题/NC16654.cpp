#include <cstdio>
#include <iostream>
using namespace std;
struct node {
    int xh, pj, py, lw, jj;
    char gb, xb;
    string xm;
} a[105];
int n;
int main() {
    int sum = 0, mx = 0;
    string name;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].xm >> a[i].pj >> a[i].py >> a[i].gb >> a[i].xb >> a[i].lw;
        int s = 0;
        if (a[i].pj > 80 && a[i].lw >= 1) s += 8000;
        if (a[i].pj > 85 && a[i].py > 80) s += 4000;
        if (a[i].pj > 90) s += 2000;
        if (a[i].pj > 85 && a[i].xb == 'Y') s += 1000;
        if (a[i].py > 80 && a[i].gb == 'Y') s += 850;
        sum += s;
        if (s > mx) {
            mx = s;
            name = a[i].xm;
        }
    }
    cout << name << endl << mx << endl << sum;
    return 0;
}