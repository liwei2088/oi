#include <cstdio>
#include <iostream>
using namespace std;
int n, a[25];
bool st[105];
int main() {
    cin >> n;
    for (int k = 1; k <= n; k++) {
        int x;
        cin >> x;
        bool succ = false;
        for (int i = 1; i <= 20; i++)
            if (5 - a[i] >= x) {
                for (int j = 1; j <= x; j++) {
                    cout << (i - 1) * 5 + j + a[i] << " ";
                    st[(i - 1) * 5 + j + a[i]] = true;
                }
                cout << endl;
                a[i] += x;
                succ = true;
                break;
            }
        if (!succ) {
            for (int i = 1; i <= 100 && x; i++)
                if (!st[i]) {
                    st[i] = true;
                    a[(i - 1) / 5 + 1]++;
                    cout << i << " ";
                    x--;
                }
            cout << endl;
        }
    }
    return 0;
}