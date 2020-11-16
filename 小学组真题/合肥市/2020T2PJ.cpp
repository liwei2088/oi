#include <iostream>
using namespace std;
int n, a[100005];
int main() {
    cin >> n;
    for (int i = 1, j = 0; i <= n; i++) {
        cin >> a[i];
        if (a[i] != a[i - 1]) j = i - 1;
        cout << j << " ";
    }
    return 0;
}