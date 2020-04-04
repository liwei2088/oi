#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    if (a * a + b * b == c * c)
        cout << c * c;
    else
        cout << c * c + b * b;
    return 0;
}