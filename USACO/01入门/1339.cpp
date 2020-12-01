#include <iostream>
using namespace std;
string a, b;
int main() {
    cin >> a >> b;
    int x = 1, y = 1;
    for (int i = 0; a[i]; i++) {
        x *= a[i] - 'A' + 1;
    }
    for (int i = 0; b[i]; i++) {
        y *= b[i] - 'A' + 1;
    }
    if (x % 47 == y % 47)
        cout << "GO";
    else
        cout << "STAY";
    return 0;
}