#include <iostream>
#include <queue>
#include <vector>
using namespace std;
const int N = 10005;
priority_queue<long long, vector<long long>, greater<long long> > q;
int main() {
    int n, t;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        q.push(t);
    }
    long long ans = 0;
    while (q.size() >= 2) {
        long long x = q.top();
        q.pop();
        long long y = q.top();
        q.pop();
        ans += x + y;
        q.push(x + y);
    }
    cout << ans;
    return 0;
}