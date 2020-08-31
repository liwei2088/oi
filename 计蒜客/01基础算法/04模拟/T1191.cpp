#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if (a % 2 != 0) {
        cout << "0 0";
        return 0;
    }
    int x = a / 2;
    int y = a / 4 + a % 4 / 2;
    cout << y << " " << x;
    return 0;
}