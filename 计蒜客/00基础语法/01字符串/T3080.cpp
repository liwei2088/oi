#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
string a, b;
vector<int> c;
int main() {
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int n = a.size(), m = b.size(), k = 0;
    int t = 0;
    for (int i = 0; i < n || i < m; i++) {
        if (i < n) t += a[i] - '0';
        if (i < m) t += b[i] - '0';
        c.push_back(t % 10);
        t = 0;
    }
    for (int i = c.size() - 1; i >= 0; i--) cout << c[i];
    return 0;
}