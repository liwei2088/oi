#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string a, b;
int c[205], lc;
int main() {
    cin >> a >> b;
    int la = a.size(), lb = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (int i = 0; i < la; i++)
        for (int j = 0; j < lb; j++) c[i + j] += (a[i] - '0') * (b[j] - '0');
    lc = la + lb;
    for (int i = 0; i < lc; i++) {
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    while (lc > 0 && !c[lc]) lc--;
    for (int i = lc; i >= 0; i--) cout << c[i];
    cout << endl;
    return 0;
}