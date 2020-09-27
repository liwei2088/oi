#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    if (a2 / a1 == b2 / b1 && b2 / b1 == c2 / c1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}