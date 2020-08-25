#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char s[5005];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 9 != 0 && i % 2 == 1) continue;
        if (i % 7 == 0 && i % 2 == 0) continue;
        char t[10];
        sprintf(t, "%d", i);
        strcat(s, t);
    }
    cout << strlen(s);
    return 0;
}