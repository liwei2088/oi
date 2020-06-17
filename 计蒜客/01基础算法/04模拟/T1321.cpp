#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int h, m, s, t1, t2;
    scanf("%d:%d:%d", &h, &m, &s);
    t1 = h * 3600 + m * 60 + s;
    scanf("%d:%d:%d", &h, &m, &s);
    t2 = h * 3600 + m * 60 + s;
    cout << t1 - t2;
    return 0;
}