#include <cstdio>
#include <iostream>
using namespace std;
string a, b;
int main() {
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] != b[i]) {
            a[i] = a[i] == '*' ? 'o' : '*';
            a[i + 1] = a[i + 1] == '*' ? 'o' : '*';
            ans++;
        }
    }
    cout << ans;
    return 0;
}