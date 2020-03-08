#include <algorithm>
#include <iostream>
using namespace std;

struct student {
    int d;  //序号
    int c;  //类别序号
    int w;  //初始权值
} a[20010];

int n, k, e[11];

bool cmp(student x, student y) {
    if (x.w == y.w)
        return x.d < y.d;
    return x.w > y.w;
}

int main() {
    int i;
    cin >> n >> k;
    for (i = 1; i <= 10; i++) {
        cin >> e[i];
    }
    for (i = 1; i <= n; i++) {
        cin >> a[i].w;
        a[i].d = i;
    }
    sort(a + 1, a + n + 1, cmp);
    for (i = 1; i <= n; i++) {
        a[i].c = (i - 1) % 10 + 1;
        a[i].w += e[a[i].c];
    }
    sort(a + 1, a + n + 1, cmp);
    for (i = 1; i <= k; i++) {
        cout << a[i].d << " ";
    }
    system("pause");
    return 0;
}