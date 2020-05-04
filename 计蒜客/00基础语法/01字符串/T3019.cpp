#include <cstring>
#include <iostream>
using namespace std;
string a, b;
int n;
int main() {
    cin >> n;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != b[i]) ans++;
    cout << ans;
    return 0;
}