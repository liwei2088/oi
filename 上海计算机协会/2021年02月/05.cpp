#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 100005;
struct node {
    int begin, end;
} a[N];
int n;

bool cmp(node x, node y) {
    if (x.end == y.end) return x.begin < y.begin;
    return x.end < y.end;
}
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d%d", &a[i].begin, &a[i].end);
    sort(a + 1, a + n + 1, cmp);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int res = 1;
        for (int j = i + 1; j <= n; j++) 
            if (a[i].end >= a[j].begin) res++;
        
        ans = max(ans, res);
    }
    printf("%d", ans);
    return 0;
}