#include <iostream>
using namespace std;
int a[10];
int main() {
    int s = 0;
    for (int i = 1; i <= 9; i++) cin >> a[i], s += a[i];
    int x, y;
    for (int i = 1; i <= 9; i++)
        for (int j = i + 1; j <= 9; j++)
            if (s - a[i] - a[j] == 100) {
                x = i;
                y = j;
            }
    for (int i = 1; i <= 9; i++) {
        if (i == x || i == y) continue;
        cout << a[i] << endl;
    }
    return 0;
}