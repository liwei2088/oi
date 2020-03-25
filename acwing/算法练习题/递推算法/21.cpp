#include <iostream>
using namespace std;

int Fibonacci(int n) {
    int f0 = 0, f1 = 1, f2;
    for (int i = 1; i <= n; i++) {
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
    }
    return f0;
}

int main() {
    int n;
    cin >> n;
    cout << Fibonacci(n);
    return 0;
}