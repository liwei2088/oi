#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string a, b, c;
int main() {
    cin >> a >> b;
    cout << a << endl;
    reverse(b.begin(), b.end());
    cout << b << endl;
    int n = a.size(), m = b.size();
    int i;
    for (i = 0; i < n && i < m; i++) {
        c.push_back(a[i]);
        c.push_back(b[i]);
    }
    while (i < n) c.push_back(a[i]), i++;
    while (i < m) c.push_back(b[i]), i++;
    cout << c;
    return 0;
}