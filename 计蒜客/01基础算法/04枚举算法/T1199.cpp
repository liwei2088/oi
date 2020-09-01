#include <iostream>
using namespace std;
int n, k, a[1005];
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[i] + a[j] == k) {
                cout << "yes";
                return 0;
            }
    cout << "no";
    return 0;
}