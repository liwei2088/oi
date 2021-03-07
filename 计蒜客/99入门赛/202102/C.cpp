#include <cstdio>
#include <iostream>
using namespace std;
int dd[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int Y, M;
    cin >> Y >> M;
    int w = 3;
    for (int y = 1970; y < Y; y++) {
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
            w += 366;
        else
            w += 365;
        w %= 7;
    }
    if (Y % 4 == 0 && Y % 100 != 0 || Y % 400 == 0) dd[2] = 29;
    for (int m = 1; m < M; m++) {
        w += dd[m];
        w %= 7;
    }
    for (int d = 1; d <= dd[M]; d++) {
        if (w == 5 && d + 7 > dd[M]) {
            cout << d << endl;
            return 0;
        }
        w = (w + 1) % 7;
    }
    return 0;
}