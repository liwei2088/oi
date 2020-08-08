#include <iostream>
using namespace std;
const int N = 5005;
int f[N], n;
int main() {
    cin >> n;
    f[0] = 1;
    for (int i = 1; i <= n; i++) {
        f[i] = f[i - 1] + i;
    }
    cout << f[n];
    return 0;
}