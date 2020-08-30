#include <iostream>
using namespace std;

int main() {
    int a, b, c, t;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        bool f = false;
        for (int x = 1000; x <= 9999; x++) {
            if (x % a == 0 && (x + 1) % b == 0 && (x + 2) % c == 0) {
                cout << x << endl;
                f = true;
                break;
            }
        }
        if (f == false) cout << "Impossible" << endl;
    }

    return 0;
}