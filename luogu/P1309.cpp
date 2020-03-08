#include <algorithm>
#include <iostream>
using namespace std;

struct player {
    int no;      //序号
    int score;   //分数
    int energy;  //实力
};

player a[200010], win[100010], loss[100010];

int n, r, q;

bool cmp(player x, player y) {
    if (x.score == y.score) return x.no < y.no;
    return x.score > y.score;
}

void mergeSort() {
    int i = 1, j = 1, k = 1;
    while (i <= n && j <= n) {
        if (win[i].score > loss[j].score ||
            (win[i].score == loss[j].score && win[i].no < loss[j].no)) {
            a[k++] = win[i++];
        } else {
            a[k++] = loss[j++];
        }
    }
    while (i <= n) {
        a[k++] = win[i++];
    }
    while (j <= n) {
        a[k++] = loss[j++];
    }
}

int main() {
    int i, j;
    cin >> n >> r >> q;
    for (i = 1; i <= 2 * n; i++) {
        cin >> a[i].score;
        a[i].no = i;
    }
    for (i = 1; i <= 2 * n; i++) {
        cin >> a[i].energy;
    }
    sort(a + 1, a + 2 * n + 1, cmp);
    for (i = 1; i <= r; i++) {
        int t = 1;
        for (j = 1; j <= 2 * n; j += 2) {
            if (a[j].energy > a[j + 1].energy) {
                a[j].score++;
                win[t] = a[j];
                loss[t] = a[j + 1];
            } else {
                a[j + 1].score++;
                win[t] = a[j + 1];
                loss[t] = a[j];
            }
            t++;
        }
        mergeSort();
    }
    sort(a + 1, a + 2 * n + 1, cmp);
    cout << a[q].no;
    system("pause");
    return 0;
}