#include <cstdio>
#include <iostream>
using namespace std;
int h1, m1, h2, m2, h3, m3;
char c1, c2;
int main() {
    scanf("%d:%d %c.m", &h1, &m1, &c1);
    scanf("%d:%d %c.m", &h2, &m2, &c2);
    scanf("%dh%dmin", &h3, &m3);
    int t;
    if (c1 == c2)
        t = h2 * 60 + m2 - (h1 * 60 + m1);
    else if (c1 == 'a' && c2 == 'p')
        t = 12 * 60 + h2 * 60 + m2 - (h1 * 60 + m1);
    else if (c1 == 'p' && c2 == 'a')
        t = 12 * 60 - (h2 * 60 + m2) + (h1 * 60 + m1);
    cout << t << " " << h3 << " " << m3 << endl;
    if (t / 60 == h3 && t % 60 == m3)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}