#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char s[1005];

bool check(int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++, r--;
    }
    return true;
}

int main() {
    scanf("%s", s);
    int n = strlen(s);
    int ans = 1;
    for (int l = 0; l < n; l++)
        for (int r = l + 1; r < n; r++) {
            if (check(l, r)) {
                ans = max(ans, r - l + 1);
            }
        }
    printf("%d", ans);
    return 0;
}