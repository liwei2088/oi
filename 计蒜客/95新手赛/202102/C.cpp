#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int sum = 0, n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    cout << sum;
    return 0;
}