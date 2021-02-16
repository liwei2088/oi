#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    // freopen("data.in", "r", stdin);
    // freopen("data.out", "w", stdout);
    int n;
    scanf("%d", &n);
    while (n--) {
        char s[10];
        scanf("%s", s);
        int res = 0, k = 1;
        for (int i = strlen(s) - 1; i >= 0; i--) {
            res += (s[i] - '0') * k;
            k *= 2;
        }
        printf("%c", res + 'a' - 1);
    }
    return 0;
}