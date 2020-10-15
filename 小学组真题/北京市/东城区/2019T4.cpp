#include <iostream>
using namespace std;

bool ss(int x) {
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int nx(int x) {
    int s = 0;
    while (x) {
        s = s * 10 + x % 10;
        x /= 10;
    }
    return s;
}

bool hw(int x) { return nx(x) == x; }

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a;; i++) {
        if(a)
    }
    return 0;
}