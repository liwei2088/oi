#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i <= n; i++)
        if ((i ^ (2 * i) ^ (3 * i)) == 0) ans++;
    cout << ans;
    return 0;
}