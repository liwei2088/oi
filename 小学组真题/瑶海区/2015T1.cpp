#include <iostream>
using namespace std;

//通过举例可以发现 1->1 2->2  3->4  4->8 正好是两倍

int main() {
    int n, ans = 1;
    cin >> n;
    for (int i = 2; i <= n; i++) ans = (ans * 2) % 32749;
    cout << ans;
    return 0;
}