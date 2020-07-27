#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((a >= 90 && b >= 90 || a >= 90 && c >= 90 || b >= 90 && c >= 90) &&
        d >= 85)
        cout << "Qualified";
    else
        cout << "Not qualified";
    return 0;
}