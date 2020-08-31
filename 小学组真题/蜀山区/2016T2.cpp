#include <iostream>
using namespace std;
int d[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
    int yy, mm, dd;
    cin >> yy >> mm >> dd;
    if (yy % 4 == 0 && yy % 100 != 0 || yy % 400 == 0)
        d[2] = 29;
    else
        d[2] = 28;
    for (int i = 1; i <= 10000; i++) {
        dd++;
        if (dd > d[mm]) {
            dd = 1;
            mm++;
            if (mm == 13) {
                mm = 1;
                yy++;
                if (yy % 4 == 0 && yy % 100 != 0 || yy % 400 == 0)
                    d[2] = 29;
                else
                    d[2] = 28;
            }
        }
    }
    cout << yy << "-" << mm << "-" << dd;
    return 0;
}