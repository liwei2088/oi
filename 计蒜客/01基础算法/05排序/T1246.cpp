#include <algorithm>
#include <iostream>
using namespace std;
struct node {
    string dna;
    int nxd;
    int xh;
} a[100];

int f(string s, int n) {
    int res = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (s[i] > s[j]) res++;
    return res;
}

bool cmp(node x, node y) {
    if (x.nxd < y.nxd) return true;
    if (x.nxd == y.nxd && x.xh < y.xh) return true;
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a[i].dna;
        a[i].nxd = f(a[i].dna, n);
        a[i].xh = i;
    }
    sort(a + 1, a + m + 1, cmp);
    for (int i = 1; i <= m; i++) cout << a[i].dna << endl;
    return 0;
}