#include <cstdio>
#include <iostream>
#include <sstream>
using namespace std;

string q[10010], s;

int main() {
    //freopen("data.in", "r", stdin);
    //freopen("data.out", "w", stdout);
    int n, ans = 0, k = 0;
    cin >> n;
    getchar();
    while (n--) {
        k++;
        getline(cin, s);
        for (int i = 0; s[i]; i++) {
            if (s[i] == ' ') {
                ans++;
                continue;
            }
            q[k] += s[i];
        }
    }
    cout << ans << endl;
    for (int i = 1; i <= k; i++) cout << q[i] << endl;
    return 0;
}