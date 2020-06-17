#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1005;
struct node {
    int num, begin, end;
} q[N];

bool cmp(node x, node y) {
    if (x.end == y.end && x.begin == y.begin) return x.num < y.num;
    if (x.end == y.end) return x.begin < y.begin;
    return x.end < y.end;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int h, m;
        scanf("%d:%d", &h, &m);
        q[i].num = i;
        q[i].begin = h * 60 + m;
        scanf("%d:%d", &h, &m);
        q[i].end = q[i].begin + h * 60 + m;
    }
    sort(q + 1, q + n + 1, cmp);
    for (int i = 1; i <= n; i++) cout << q[i].num << endl;
    return 0;
}