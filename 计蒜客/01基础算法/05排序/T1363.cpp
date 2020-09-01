#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (abs(a) > abs(b) || (abs(a) == abs(b) && a > b)) swap(a, b);
    if (abs(b) > abs(c) || (abs(b) == abs(c) && b > c)) swap(b, c);
    if (abs(a) > abs(b) || (abs(a) == abs(b) && a > b)) swap(a, b);
    cout << a << " " << b << " " << c;
    return 0;
}