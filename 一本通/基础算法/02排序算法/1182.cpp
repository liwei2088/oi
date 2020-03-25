#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
struct node {
    string s;
    double h;
} a[45];
int n;

bool cmp(node x, node y) {
    if (x.s == "male" && y.s == "male") return x.h < y.h;
    if (x.s == "female" && y.s == "female") return x.h > y.h;
    if (x.s == "male" && y.s == "female") return true;
    return false;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].s >> a[i].h;
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) printf("%.2lf ", a[i].h);
    return 0;
}