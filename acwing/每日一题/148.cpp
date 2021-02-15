#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;
int n;
priority_queue<int, vector<int>, greater<int> > q;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    int ans = 0;
    while (q.size() != 1) {
        int x = q.top();
        q.pop();
        int y = q.top();
        q.pop();
        q.push(x + y);
        ans += x + y;
    }
    cout << ans;
    return 0;
}