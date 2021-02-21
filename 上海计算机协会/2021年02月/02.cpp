#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;
typedef long long LL;
priority_queue<LL, vector<LL>, greater<LL> > q;

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        LL x;
        scanf("%lld", &x);
        q.push(x);
    }
    while (q.size() != 1) {
        LL x = q.top();
        q.pop();
        LL y = q.top();
        if (x == y) q.push(x * 2), q.pop();
    }
    printf("%lld", q.top());
    return 0;
}