#include <cmath>
#include <iostream>
using namespace std;
int n;
struct node {
    double x, y;
} a[105];

bool check(int i, int j, int k) {
    double ab = sqrt((a[i].x - a[j].x) * (a[i].x - a[j].x) +
                     (a[i].y - a[j].y) * (a[i].y - a[j].y));
    double ac = sqrt((a[i].x - a[k].x) * (a[i].x - a[k].x) +
                     (a[i].y - a[k].y) * (a[i].y - a[k].y));
    double bc = sqrt((a[j].x - a[k].x) * (a[j].x - a[k].x) +
                     (a[j].y - a[k].y) * (a[j].y - a[k].y));
    if (ab == ac + bc || ac == ab + bc || bc == ac + ab) return true;
    return false;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].x >> a[i].y;
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            for (int k = j + 1; k <= n; k++)
                if (check(i, j, k) == true) {
                    cout << "YES";
                    return 0;
                }
    cout << "NO";
    return 0;
}