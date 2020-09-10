#include <iostream>
using namespace std;
int n;
struct node {
    int xh, xy, kz;
    double zh;
    void calc() { zh = xy * 0.7 + kz * 0.3; }
    bool check() {
        if (xy + kz > 140 && zh >= 80)
            return true;
        else
            return false;
    }
} a[1005];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].xh >> a[i].xy >> a[i].kz;
        a[i].calc();
        if (a[i].check())
            cout << "Excellent" << endl;
        else
            cout << "Not excellent" << endl;
    }
    return 0;
}