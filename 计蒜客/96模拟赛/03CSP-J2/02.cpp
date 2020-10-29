#include <cstdio>
#include <iostream>
using namespace std;
int n;
char s[100005];
int main() {
    freopen("light.in", "r", stdin);
    freopen("light.out", "w", stdout);
    cin >> n;
    scanf("%s", s + 1);
    int ans = 0;
    for (int i = n; i >= 1; i--) {
        if (s[i] == '1') {
            for (int j = 1; j * j <= i; j++) {
                if (i % j == 0) {
                    s[j] = '0';
                    s[i / j] = '0';
                }
            }
            ans++;
        }
    }
    cout << ans;
    return 0;
}