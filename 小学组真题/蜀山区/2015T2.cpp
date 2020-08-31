#include <cstring>
#include <iostream>
using namespace std;
int x, y, z;
int f[10];
int main() {
    cin >> x >> y >> z;
    for (int i = 100; i <= 999; i++) {
        memset(f, 0, sizeof(f));
        if (i % x != 0) continue;
        int j = i * y / x;
        if (j < 100 || j > 999) continue;
        int k = i * z / x;
        if (k < 100 || k > 999) continue;
        f[i % 10]++, f[i / 10 % 10]++, f[i / 100]++;
        f[j % 10]++, f[j / 10 % 10]++, f[j / 100]++;
        f[k % 10]++, f[k / 10 % 10]++, f[k / 100]++;
        bool flag = true;
        for (int u = 0; u <= 9; u++) {
            if (f[u] > 1) {
                flag = false;
                break;
            }
        }
        if (flag == true) {
            cout << i << " " << j << " " << k << endl;
        }
    }
    return 0;
}