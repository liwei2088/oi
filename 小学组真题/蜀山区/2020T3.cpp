#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        long long s = 0;
        cin >> x;
        for (int i = 1; i * i <= x; i++) {
            if (x % i == 0) {
                s += i;
                if (i != x / i) s += x / i;
            }
        }
        cout << s << endl;
    }
    return 0;
}