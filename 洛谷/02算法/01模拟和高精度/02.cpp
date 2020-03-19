#include <iostream>
using namespace std;
int n, a[105];
int main() {
    n = 1;
    while (cin >> a[n] && a[n]) n++;
    n--;
    int i = 1, j = n;
    while (i < j) swap(a[i++], a[j--]);
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}