#include <iostream>
using namespace std;

bool isPrime(int k) {
    if (k == 0 || k == 1) return false;
    for (int i = 2; i * i <= k; i++)
        if (k % i == 0) return false;
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    bool f = false;
    for (int i = a; i <= b; i++) {
        if (isPrime(i) && isPrime(i / 10)) {
            f = true;
            cout << i << endl;
        }
    }
    if (f == false) cout << "None";
    return 0;
}