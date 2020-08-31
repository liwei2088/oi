#include <iostream>
using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k;
    for (x = 1;; x++)
        if ((x / k) * (x % k) == n) {
            cout << x;
            return 0;
        }
    return 0;
}