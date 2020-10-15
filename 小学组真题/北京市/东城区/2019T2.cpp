#include <iostream>
using namespace std;
int n;
bool a[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++)
            if (j % i == 0) a[j] = !a[j];
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (a[i]) ans++;
    cout << ans << endl;
    for (int i = 1; i <= n; i++)
        if (a[i]) cout << i << endl;
    return 0;
}