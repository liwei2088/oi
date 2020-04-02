#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
string a;
vector<int> c;
int b;
int main() {
    cin >> a >> b;
    reverse(a.begin(), a.end());
    int la = a.size();
    int t = 0;
    for (int i = 0; i < la; i++) {
        t += (a[i] - '0') * b;
        c.push_back(t % 10);
        t /= 10;
    }
    while (t) c.push_back(t % 10), t /= 10;
    for (int i = c.size() - 1; i >= 0; i--) cout << c[i];
    return 0;
}