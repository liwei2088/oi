#include <iostream>
using namespace std;

int main() {
    int n, ans = 2;
    cin >> n;
    for (int i = 2; i <= n; i++) ans = (ans * 2) % 32749;
    cout << ans / 2;
    return 0;
}