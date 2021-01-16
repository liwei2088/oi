#include <cstdio>
#include <iostream>
using namespace std;
int a[10005];
int main() {
    int n, fm = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        fm = max(fm, t);
        a[t]++;
    }
    for (int i = 0; i <= fm; i++) cout << a[i] << endl;
    return 0;
}