#include <iostream>
using namespace std;
int n, a[1005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        int cnt = 0;
        for (int j = 1; j < i; j++)
            if (a[i] < a[j]) cnt++;
        cout << cnt << " ";
    }
    return 0;
}