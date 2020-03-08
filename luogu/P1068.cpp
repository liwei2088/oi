#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int n, m;
struct student {
    int no;
    int score;
} a[5100];

bool cmp(student x, student y) {
    if (x.score > y.score) return true;
    if (x.score == y.score && x.no < y.no) return true;
    return false;
}

int main() {
    int i;
    cin >> n >> m;
    for (i = 1; i <= n; i++) {
        cin >> a[i].no >> a[i].score;
    }
    m = floor(m * 1.5);
    sort(a + 1, a + n + 1, cmp);
    int s = a[m].score;
    int cnt = 0;
    for (i = 1; i <= n; i++) {
        if (a[i].score >= s) cnt++;
    }
    cout << s << " " << cnt << endl;
    for (i = 1; i <= cnt; i++) {
        cout << a[i].no << " " << a[i].score << endl;
    }
    system("pause");
    return 0;
}