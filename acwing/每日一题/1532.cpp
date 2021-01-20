#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int n, m, a[100005];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int i = 1, j = n;
    while (i < j) {
        if (a[i] + a[j] == m) {
            cout << a[i] << " " << a[j] << endl;
            return 0;
        } else if (a[i] + a[j] > m) {
            j--;
        } else {
            i++;
        }
    }
    cout << "No Solution" << endl;
    return 0;
}