#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int get(int l, int r) {
    int res = 0;
    for (int i = l; i <= r; i++) res = res * 10 + a[i];
    return res;
}

int main() {
    int ans = 0, n;
    cin >> n;
    do {
        for (int i = 0; i <= 6; i++)
            for (int j = i + 1; j <= 7; j++) {
                int x = get(0, i);
                int y = get(i + 1, j);
                int z = get(j + 1, 8);
                if (y % z == 0 && x + y / z == n) ans++;
            }
    } while (next_permutation(a, a + 9));
    cout << ans;
    return 0;
}