#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool f = false;
    for (int i = 1; i <= n / 2; i++) {
        int s = 0, j = i;
        while (s < n) {
            s += j;
            j++;
        }
        if (s == n) {
            f = true;
            for (int k = i; k < j; k++) {
                cout << k << " ";
            }
            cout << endl;
        }
    }
    if (!f) cout << "None" << endl;
    return 0;
}