#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int mx = 0, idx;
    for (int i = 1; i <= 7; i++) {
        int a, b;
        cin >> a >> b;
        if (mx < a + b) {
            mx = a + b;
            idx = i;
        }
    }
    if (mx > 8)
        cout << idx << endl;
    else
        cout << "0" << endl;
    return 0;
}