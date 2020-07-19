#include <iostream>
using namespace std;
/*
    时间复杂度 O(logn)
*/
int main() {
    double c;
    while (cin >> c) {
        if (c <= 0.00) break;
        double s = 0;
        int n = 1;
        while (s <= c) {
            s += 1.0 / (n + 1);
            n++;
        }
        cout << n - 1 << endl;
    }
    return 0;
}