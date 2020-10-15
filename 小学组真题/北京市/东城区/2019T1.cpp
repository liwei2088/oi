#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int m = 1;; m++) {
        if (m * a > b) {
            cout << m << endl;
            return 0;
        }
    }
    return 0;
}