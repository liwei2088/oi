#include <iostream>
using namespace std;

int main() {
    long long n, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int t = i;
        while (t != 0) {
            s += t % 10;
            t /= 10;
        }
    }
    cout << s;
    return 0;
}