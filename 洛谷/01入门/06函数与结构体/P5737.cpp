#include <iostream>
using namespace std;
int a[2005];
bool isLeap(int x) {
    if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0) return true;
    return false;
}

int main() {
    int x, y;
    cin >> x >> y;
    int ans = 0;
    for (int i = x; i <= y; i++) {
        if (isLeap(i)) {
            a[++ans] = i;
        }
    }
    cout << ans << endl;
    for (int i = 1; i <= ans; i++) cout << a[i] << " ";
    return 0;
}