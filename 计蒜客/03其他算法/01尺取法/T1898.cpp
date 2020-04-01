#include <cstdio>
#include <iostream>
#include <map>
using namespace std;
const int N = 1000005;
int n, m, a[N], s[N];
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    int cnt = 0, mi = n, mii, mij;
    for (int i = 1, j = 1; j <= i; j++) {
        while (i <= n && cnt < m) {
            if (s[a[i]] == 0) cnt++;
            s[a[i]]++;
            i++;
        }
        if (cnt < m) break;
        if (mi > i - j) {
            mi = i - j;
            mii = i - 1;
            mij = j;
        }
        s[a[j]]--;
        if (s[a[j]] == 0) cnt--;
    }
    printf("%d %d", mij, mii);
    return 0;
}