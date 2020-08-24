#include <cstring>
#include <iostream>
using namespace std;
int n, k;
string s;

bool check(int x) {
    string t = s;
    int res = 0;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == '1') {
            for (int j = i; j <= i + x - 1; j++) t[j] = '0';
            res++;
        }
    }
    return res <= k;
}

int bsearch(int l, int r) {
    while (l < r) {
        int m = (l + r) >> 1;
        if (check(m))
            r = m;
        else
            l = m + 1;
    }
    return l;
}

int main() {
    cin >> n >> k;
    cin >> s;
    cout << bsearch(1, n);
    return 0;
}