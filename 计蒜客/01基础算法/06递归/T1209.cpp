#include <iostream>
using namespace std;
int n, f[255];

int work(int k) {
    if (k == 1) return 1;
    if (k == 2) return 3;
    if (f[k] != 0) return f[k];
    return f[k] = (work(k - 1) + 2 * work(k - 2)) % 100007;
}

int main() {
    cin >> n;
    cout << work(n);
    return 0;
}