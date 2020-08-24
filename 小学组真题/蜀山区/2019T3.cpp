#include <cstdio>
#include <iostream>
using namespace std;
int dd[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
    int y, m;
    cin >> y >> m;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) dd[2] = 29;
    int s = 0;
    for (int i = 1900; i < y; i++) {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
            s += 366;
        else
            s += 365;
    }
    for (int i = 1; i < m; i++) s += dd[i];
    s = s % 7 + 1;
    printf("Sun Mon Tue Wed Thu Fri Sat\n");
    for (int i = 1; i <= s; i++) printf("    ");
    for (int i = 1; i <= dd[m]; i++) {
        s++;
        printf("%3d ", i);
        if (s % 7 == 0) puts("");
    }
    return 0;
}