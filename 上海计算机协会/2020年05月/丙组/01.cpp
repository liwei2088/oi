#include <iostream>
using namespace std;

int main() {
    int n, k = 3, x = 10;
    cin >> n;
    int ans = 0;
    while (x != n) {
        if (k == 1 || k == 2) x += 7;
        x--;
        k++;
        if (k == 8) k = 1;
        ans++;
    }
    cout << ans;
    return 0;
}