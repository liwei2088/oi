#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
string a, b;
vector<int> c;
int main() {
    cin >> a >> b;
    int la = a.size(), lb = b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int t = 0;
    for (int i = 0; i < la || i < lb; i++) {
        if (i < la) t += a[i] - '0';
        if (i < lb) t += b[i] - '0';
        c.push_back(t % 10);
        t /= 10;
    }
    if (t) c.push_back(t);
    while (c.size() > 0 && !c.back()) c.pop_back();
    for (int i = c.size() - 1; i >= 0; i--) cout << c[i];
    return 0;
}