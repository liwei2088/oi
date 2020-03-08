#include <iostream>
using namespace std;
const int MAXN = 100010;

int a[MAXN];

int main() {
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = n; i > 1; i--) a[i] -= a[i - 1];
    long long x = 0, y = 0;
    for (int i = 2; i <= n; i++) {
        if (a[i] > 0)
            x += a[i];
        else
            y -= a[i];
    }
    cout << min(x, y) + abs(x - y) << endl;
    cout << abs(x - y) + 1 << endl;
    system("pause");
    return 0;
}