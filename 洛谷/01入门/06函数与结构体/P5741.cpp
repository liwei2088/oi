#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
struct node {
    string name;
    int yw, sx, yy, zf;
} a[1005];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].name >> a[i].yw >> a[i].sx >> a[i].yy;
        a[i].zf = a[i].yw + a[i].sx + a[i].yy;
    }
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (abs(a[i].yw - a[j].yw) <= 5 && abs(a[i].sx - a[j].sx) <= 5 &&
                abs(a[i].yy - a[j].yy) <= 5 && abs(a[i].zf - a[j].zf) <= 10) {
                    cout << a[i].name << " " << a[j].name << endl;
            }
    return 0;
}