#include <cstring>
#include <iostream>
using namespace std;
char s[10];
string t;
int main() {
    int a, b;
    cin >> a >> b;
    sprintf(s, "%d", a + b);
    int n = strlen(s);
    for (int i = n - 1, j = 0; i >= 0; i--, j++) {
        if (j % 3 == 0 && j != 0) t = ',' + t;
        t = s[i] + t;
    }
    cout << t;
    return 0;
}