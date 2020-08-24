#include <cstdio>
#include <iostream>
using namespace std;
int year, n;
int dd[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    cin >> year >> n;

    int y = year / 10000, m = year / 100 % 100, d = year % 100;
    for (int i = 1; i <= n; i++) {
        d++;
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
            dd[2] = 29;
        else
            dd[2] = 28;
        if (d > dd[m]) {
            d = 1;
            m++;
            if (m == 13) {
                m == 1;
                y++;
            }
        }
    }
    printf("%d%02d%02d", y, m, d);
    return 0;
}