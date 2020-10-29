#include <iostream>
using namespace std;

int main() {
    int n, s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        s += x;
    }
    printf("%.0lf", s * 1.0 / n);
    return 0;
}