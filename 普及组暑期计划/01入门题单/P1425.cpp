#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d;
    e = a * 60 + b;
    f = c * 60 + d;
    cout << (f - e) / 60 << " " << (f - e) % 60;
    return 0;
}