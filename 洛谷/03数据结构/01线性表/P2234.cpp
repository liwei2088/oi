#include <cmath>
#include <iostream>
#include <set>
using namespace std;
set<int> s;
set<int>::iterator it, t;
int main() {
    int n, x, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (i == 1) {
            ans = x;
            s.insert(x);
            continue;
        }
        it = s.lower_bound(x);
        if (it == s.begin())
            ans += abs(*it - x);
        else if (it == s.end())
            ans += abs(*(--it) - x);
        else
            t = it, ans += min(abs(*it - x), abs(*(--t) - x));
        s.insert(x);
    }
    cout << ans;
    return 0;
}