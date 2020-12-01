#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        int t = i;
        while (t) {
            if (t % 10 == 2 || t % 10 == 0 || t % 10 == 1 || t % 10 == 9) {
                ans += i;
                break;
            }
            t /= 10;
        }
    }
    cout << ans;
    return 0;
}