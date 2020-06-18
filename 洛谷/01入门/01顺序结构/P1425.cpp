#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int t1 = a * 60 + b, t2 = c * 60 + d;
    cout << (t2 - t1) / 60 << " " << (t2 - t1) % 60;
    return 0;
}