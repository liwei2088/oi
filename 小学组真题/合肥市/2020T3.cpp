#include <iostream>
using namespace std;
int n;
bool f[10005];
int main() {
    cin >> n;
    int k = n, s = 0;
    while (k > 3) {
        s = 0;
        for (int i = 1; i <= n; i++) {
            if (f[i] == false) {
                s++;
                if (s % 2 == 0) {
                    f[i] = true;
                    k--;
                }
            }
        }
        if (k <= 3) break;
        s = 0;
        for (int i = 1; i <= n; i++) {
            if (f[i] == false) {
                s++;
                if (s % 3 == 0) {
                    f[i] = true;
                    k--;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
        if (f[i] == false) cout << i << " ";
    return 0;
}