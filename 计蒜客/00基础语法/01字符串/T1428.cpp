#include <cstring>
#include <iostream>
using namespace std;
char s[1005];
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        int ans = 1e9;
        for (int i = 0; s[i]; i++) {
            int sum = 0;
            char ch = s[i];
            for (int j = 0; s[j]; j++) sum += (ch - s[j] + 26) % 26;
            ans = min(ans, sum);
        }
        printf("%d\n", ans);
    }
    return 0;
}