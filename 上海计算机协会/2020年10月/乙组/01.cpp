#include <iostream>
using namespace std;
int n;

bool ss(int x) {
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

bool check(int x) {
    int cnt = 0;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            cnt++;
            if (x / i != i) cnt++;
        }
    }
    return ss(cnt);
}

int main() {
    cin >> n;
    int ans = 0;
    for (int i = 2; i <= n; i++)
        if (check(i)) ans += i;
    cout << ans;
    return 0;
}