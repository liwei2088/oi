#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int n, m, a[10005];
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    while (m--) {
        next_permutation(a, a + n);
    }
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}