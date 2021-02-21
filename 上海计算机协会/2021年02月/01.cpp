#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    cout << "+";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) cout << "-";
        cout << "+";
    }
    return 0;
}