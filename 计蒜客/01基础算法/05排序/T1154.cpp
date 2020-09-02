#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int n;
struct node {
    string xb;
    double sg;
} a[45];

bool cmp(node x, node y) {
    if (x.xb == "male" && y.xb == "female") return true;
    if (x.xb == "male" && y.xb == "male" && x.sg < y.sg) return true;
    if (x.xb == "female" && y.xb == "female" && x.sg > y.sg) return true;
    return false;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].xb >> a[i].sg;
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) printf("%.2lf ", a[i].sg);
    return 0;
}