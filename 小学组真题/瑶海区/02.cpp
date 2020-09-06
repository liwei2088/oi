#include <iostream>
using namespace std;

int main() {
    int y, s, e, j;
    cin >> y >> s >> e >> j;
    double pj1 = (y + s + e + j) / 4.0;
    double pj2 = (y + s + e) / 4.0;
    double zg = max(y, max(s, max(e, j)));
    double zd = min(y, min(s, min(e, j)));
    if (pj1 > 90)
        cout << "A";
    else if (pj2 > 80 && j >= 90)
        cout << "B";
    else if (zg == 100 && zd >= 60)
        cout << "C";
    else
        cout << "D";
    return 0;
}