#include <algorithm>
#include <iostream>
using namespace std;
int n, a[200005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) {
        int j = i;
        while (j <= n && a[i] == a[j]) j++;
        cout << a[i] << " " << j - i << endl;
        i = j - 1;
    }
    return 0;
}