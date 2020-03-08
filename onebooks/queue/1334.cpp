#include <iostream>
using namespace std;

int q[110], nx[110];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) q[i] = i, nx[i] = i + 1;
    nx[n] = 1;
    while (n--) {
        int idx = 1, t = 1;
        while (t < m) {
            idx = nx[idx];
            t++;
        }
        cout << q[nx[idx]] << " ";
        nx[idx] = nx[nx[idx]];
    }

    return 0;
}