#include <iostream>
using namespace std;
int a[10];
int main() {
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        int t = i;
        while (t != 0) {
            a[t % 10]++;
            t /= 10;
        }
    }
    for (int i = 0; i <= 9; i++) cout << a[i] << " ";
    return 0;
}