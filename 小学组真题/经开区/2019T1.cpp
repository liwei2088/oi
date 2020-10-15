#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    if (a1 > b1) swap(a1, b1);
    if (b1 > c1) swap(b1, c1);
    if (a1 > b1) swap(a1, b1);
    if (a2 > b2) swap(a2, b2);
    if (b2 > c2) swap(b2, c2);
    if (a2 > b2) swap(a2, b2);
    if (ceil(a2 * 1.0 / a1) == ceil(b2 * 1.0 / b1) &&
        ceil(b2 * 1.0 / b1) == ceil(c2 * 1.0 / c1))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}