#include <iostream>
using namespace std;

long long f(int k) {
    if (k == 1)
        return 1;
    else
        return k * f(k - 1);
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}