#include <cstdio>
#include <iostream>
using namespace std;
int dd[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
    int y, D;
    cin >> y >> D;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) dd[2] = 29;
    int cnt = 0;
    for (int m = 1; m <= 12; m++)
        for (int d = 1; d <= dd[m]; d++) {
            cnt++;
            if (cnt == D) {
                cout << m << endl << d << endl;
            }
        }
    return 0;
}