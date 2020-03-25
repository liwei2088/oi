#include <iostream>
using namespace std;
int n, a[105];
int main() {
    int x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a[x + 50]++;
    }
    for (int i = 0; i <= 100; i++)
        if (a[i] > n / 2) {
            cout << i - 50;
            return 0;
        }
    cout << "no";
    return 0;
}