#include <iostream>
using namespace std;

int n, a[110], ans = 0;

int main() {
    int sum = 0, tag = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    tag = sum / n;
    for (int i = 1; i <= n; i++) {
        if (a[i] != tag) {
            int t = a[i] - tag;
            if (i != n) {
                a[i + 1] += t;
            } else {
                a[n - 1] += t;
            }
            ans++;
        }
    }
    cout<<ans;
    system("pause");
    return 0;
}