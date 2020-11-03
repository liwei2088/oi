#include <iostream>
using namespace std;
int n, a[105];
char b[105];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n - 1; i++) cin >> b[i];
    for (int i = 2; i <= n; i++) {
        if (b[i - 1] == '-')
            a[i] = a[i - 1] - a[i];
        else
            a[i] = a[i - 1] + a[i];
    }
    cout << a[n];
    return 0;
}