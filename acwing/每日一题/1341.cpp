#include <cstdio>
#include <iostream>
using namespace std;
int mm[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int ww[10];
int main() {
    int n;
    cin >> n;
    for (int y = 1900, w = 1; y <= 1900 + n - 1; y++) {
        for (int m = 1; m <= 12; m++) {
            if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
                mm[2] = 29;
            else
                mm[2] = 28;
            for (int d = 1; d <= mm[m]; d++) {
                if (d == 13) ww[w]++;
                w++;
                if (w == 8) w = 1;
            }
        }
    }
    cout << ww[6] << " " << ww[7] << " ";
    for (int i = 1; i <= 5; i++) cout << ww[i] << " ";
    return 0;
}