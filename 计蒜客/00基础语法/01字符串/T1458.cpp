#include <algorithm>
#include <iostream>
using namespace std;
int n;
string a[105];

int getNum(string s) {
    int res = 0;
    for (int i = 0; s[i]; i++)
        if (s[i] == '1') res++;
    return res;
}

bool cmp(string x, string y) {
    if (x.size() < y.size()) return true;
    if (x.size() == y.size() && getNum(x) < getNum(y)) return true;
    if (x.size() == y.size() && getNum(x) == getNum(y) && x < y) return true;
    return false;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) cout << a[i] << endl;
    return 0;
}