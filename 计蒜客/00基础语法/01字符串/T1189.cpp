#include <cstring>
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
char s[1005];
int main() {
    cin >> s;
    while (strlen(s) != 1) {
        int sum = 0;
        for (int i = 0; i < strlen(s); i++) sum += (s[i] - '0');
        sprintf(s,"%d",sum);
    }
    cout << s;
    return 0;
}