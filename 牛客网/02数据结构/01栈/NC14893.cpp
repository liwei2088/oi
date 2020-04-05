#include <iostream>
using namespace std;
const int N = 1000005;
int n, a[N], q[N], tt;
int main() {
    scanf("%d", &n);
    int idx = n;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        q[++tt] = a[i];
        while (q[tt] == idx) {
            cout << q[tt] << " ";
            idx--;
            tt--;
        }
    }
    while (tt) {
        cout << q[tt] << " ";
        tt--;
    }
    return 0;
}