#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int mx = 0, mxi = 0;
    for (int i = 1; i <= 7; i++) {
        int a, b;
        cin >> a >> b;
        if (mx < a + b) {
            mx = a + b;
            mxi = i;
        }
    }
    if (mx > 8)
        cout << mxi;
    else
        cout << "0";
    return 0;
}