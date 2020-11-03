#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    if (h > 12) h -= 12;
    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}