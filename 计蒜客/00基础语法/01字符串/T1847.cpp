#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string s;
int n, m;
int work1(string t, int k) {
    int p = 1, u = t.size(), res = 0;
    for (int i = u - 1; i >= 0; i--)
        if (s[i] <= '9')
            res += (s[i] - '0') * p, p *= k;
        else
            res += (s[i] - 'A' + 10) * p, p *= k;
    return res;
}

string work2(int t, int k) {
    string res;
    while (t) {
        if (t % k <= 9)
            res.push_back(t % k + '0');
        else
            res.push_back(t % k - 10 + 'A');
        t /= k;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    cin >> n >> s >> m;
    int tp = work1(s, n);
    cout << work2(tp, m);
    return 0;
}