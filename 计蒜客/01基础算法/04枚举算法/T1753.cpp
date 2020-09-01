#include <cmath>
#include <iostream>
using namespace std;

bool check(int x) {
    int a[10], c = 0;
    int t = x;
    while (t != 0) {
        a[++c] = t % 10;
        t /= 10;
    }
    int sum = 0;
    for (int i = 1; i <= c; i++) sum += pow(a[i], c);
    return x == sum;
}

int main() {
    int m, n;
    cin >> m >> n;
    bool f = false;
    for (int i = m; i <= n; i++) {
        if (check(i)) {
            f = true;
            cout << i << endl;
        }
    }
    if (f == false) cout << "No solution!";
    return 0;
}