#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (t == 1) {
        cout << "I love Luogu!" << endl;
    } else if (t == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4 << endl;
    } else if (t == 3) {
        cout << 14 / 4 << endl << 14 - 14 % 4 << endl << 14 % 4 << endl;
    } else if (t == 4) {
        printf("%.3lf", 500.0 / 3);
    } else if (t == 5) {
        cout << (260 + 220) / (12 + 20) << endl;
    } else if (t == 6) {
        cout << sqrt(6 * 6 + 9 * 9) << endl;
    } else if (t == 7) {
        cout << 100 + 10 << endl << 100 + 10 - 20 << endl << 0 << endl;
    } else if (t == 8) {
        double PI = 3.141593;
        cout << 2 * PI * 5 << endl
             << PI * 5 * 5 << endl
             << 4.0 / 3 * PI * 5 * 5 * 5 << endl;
    } else if (t == 9) {
        cout << 22 << endl;
    } else if (t == 10) {
        cout << 9 << endl;
    } else if (t == 11) {
        cout << 100.0 / 3 << endl;
    } else if (t == 12) {
        cout << 'M' - 'A' + 1 << endl << char('A' + 17) << endl;
    } else if (t == 13) {
        double PI = 3.141593;
        cout << int(pow(4.0 / 3 * PI * 4 * 4 * 4 + 4.0 / 3 * PI * 10 * 10 * 10,
                        1.0 / 3))
             << endl;
    } else if (t == 14) {
        cout << 50 << endl;
    }
    return 0;
}