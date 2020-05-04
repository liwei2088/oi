#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
int n;
int a, b;
char c[8];
char op1, op2;
int main() {
    int ans = 0;
    cin >> n;
    while (n--) {
        scanf("%d%c%d%c%s", &a, &op1, &b, &op2, c);
        if (c[0] == '?') continue;
        int k = atoi(c);
        if (op1 == '+' && k == a + b)
            ans++;
        if (op1 == '-' && k == a - b)
            ans++;
    }
    cout << ans;
    return 0;
}