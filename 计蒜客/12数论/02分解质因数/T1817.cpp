#include <iostream>
using namespace std;

bool isprime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    int i = 2;
    cout << n << "=";
    while (n != i) {
        if (isprime(n)) break;
        while (n % i == 0) {
            cout << i << "*";
            n /= i;
        }
        i++;
    }
    cout << n << endl;
    return 0;
}