#include <cstdio>
#include <iostream>
using namespace std;
int a[15], h;
int main() {
    for (int i = 1; i <= 10; i++) cin >> a[i];
    cin >> h;
    int ans = 0;
    for (int i = 1; i <= 10; i++)
        if (a[i] <= h + 30) ans++;
    cout << ans;
    return 0;
}