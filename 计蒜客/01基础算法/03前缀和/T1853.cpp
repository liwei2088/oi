#include <cstdio>
#include <iostream>
#include <map>
using namespace std;
const int N = 100005;
int n, a[N];
map<int, int> mp;
int main() {
    scanf("%d", &n);
    int ans = 0;
    mp[0] = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 0) a[i] = -1;
        a[i] = a[i - 1] + a[i];
        if (mp.find(a[i]) == mp.end()) {
            mp[a[i]] = i;
            continue;
        }
        ans = max(ans, i - mp[a[i]]);
    }
    cout << ans;
    return 0;
}