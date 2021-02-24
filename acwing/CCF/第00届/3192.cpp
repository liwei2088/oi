#include <cstdio>
#include <iostream>
using namespace std;
const int N = 10005;
int n, s[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        s[x]++;
    }
    int mx = 0, ans = 0;
    for (int i = 1; i <= 10000; i++)
        if (mx < s[i]) {
            mx = s[i];
            ans = i;
        }
    cout << ans;
    return 0;
}