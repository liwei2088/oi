#include <iostream>
using namespace std;
int d[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
    int y, w;
    cin >> y >> w;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) d[2] = 29;
    int ans = 0;
    bool f = false;
    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= d[i]; j++) {
            if (j == 13 && w == 5) {
                cout << i << endl;
                f = true;
            }
            w++;
            if (w == 8) w = 1;
        }
    }
    if (!f) cout << "None";
    return 0;
}