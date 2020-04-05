#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char s[255];
long long q[255], tt;
int main() {
    gets(s);
    long long num = 0, a, b;
    for (int i = 0; s[i] != '@'; i++) {
        if (s[i] >= '0' && s[i] <= '9')
            num = num * 10 + s[i] - '0';
        else if (s[i] == ' ')
            q[++tt] = num, num = 0;
        else if (s[i] == '+') {
            a = q[tt--];
            b = q[tt--];
            q[++tt] = a + b;
        } else if (s[i] == '-') {
            a = q[tt--];
            b = q[tt--];
            q[++tt] = b - a;
        } else if (s[i] == '*') {
            a = q[tt--];
            b = q[tt--];
            q[++tt] = a * b;
        } else {
            a = q[tt--];
            b = q[tt--];
            q[++tt] = b / a;
        }
    }
    cout << q[tt];
    return 0;
}