#include <cstdio>
#include <iostream>
using namespace std;
int dd[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);
    if (y % 4 == 0 & y % 100 != 0 || y % 400 == 0) dd[2] = 29;
    for (int i = 1; i <= 14; i++) {
        d++;
        if (d > dd[m]) {
            d = 1;
            m++;
            if (m == 13) {
                m = 1;
                y++;
            }
        }
    }
    printf("%d-%d-%d", y, m, d);
    return 0;
}