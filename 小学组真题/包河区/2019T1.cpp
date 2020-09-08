#include <iostream>
using namespace std;

void sort(int &i, int &j, int &k) {
    if (i < j) swap(i, j);
    if (j < k) swap(j, k);
    if (i < j) swap(i, j);
}

int main() {
    int n, a, b, c;
    cin >> n;
    cin >> a >> b >> c;
    sort(a, b, c);
    int ans = 0;
    while (n--) {
        int x, y, z;
        cin >> x >> y >> z;
        sort(x, y, z);
        if (x < a && y < b && z < c) ans++;
    }
    cout << ans;
    return 0;
}