#include <cstdio>
#include <iostream>
using namespace std;
int a, b, c, y1, y2;
int dt[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int dd(int y, int m) {
    if ((y % 4 == 0 && y % 100 != 0 || y % 400 == 0) && m == 2) return 29;
    return dt[m];
}

int main() {
    cin >> a >> b >> c >> y1 >> y2;
    int m = 1, d = 1, w = 1;
    for (int y = 1985; y < y1; y++) {
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
            w += 366;
        else
            w += 365;
        w = w % 7;
    }
    cout << w << endl;
    for (int y = y1; y <= y2; y++) {
        bool f = false;
        for (int m = 1; m <= 12; m++) {
            int ww = 0;
            for (int d = 1; d <= dd(y, m); d++) {
                if (w == 7) w = 0;
                if (w == c - 1) ww++;
                if (m == a && ww == b && w == c - 1) {
                    f = true;
                    printf("%02d/%02d/%02d\n", y, m, d);
                }
                w++;
            }
        }
        if (f == false) puts("none");
    }
    return 0;
}