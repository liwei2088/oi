#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
string a, b;
vector<int> c(410);
int main() {
    cin >> a >> b;
    int la = a.size(), lb = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (int i = 0; i < la; i++)
        for (int j = 0; j < lb; j++) c[i + j] += (a[i] - '0') * (b[j] - '0');
    for (int i = 0; i < la + lb; i++) {
        c[i + 1] += c[i] / 10;
        c[i] = c[i] % 10;
    }
    while (c.size() > 0 && !c.back()) c.pop_back();
    for (int i = c.size() - 1; i >= 0; i--) cout << c[i];
    return 0;
}