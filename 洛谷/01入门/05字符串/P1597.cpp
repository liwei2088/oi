#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int ans[3];
    char var, val;
    while (scanf("%c:=%c;", &var, &val) == 2) {
        if (val >= '0' && val <= '9')
            ans[var - 'a'] = val - '0';
        else
            ans[var - 'a'] = ans[val - 'a'];
    }
    cout << ans[0] << " " << ans[1] << " " << ans[2];
    return 0;
}