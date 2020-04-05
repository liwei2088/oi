#include <iostream>
using namespace std;
const int N = 100005;
int q, n, pushed[N], poped[N];
int sk[N], tp;
int main() {
    cin >> q;
    while (q--) {
        tp = 0;
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> pushed[i];
        for (int i = 1; i <= n; i++) cin >> poped[i];
        int i = 1, j = 1;
        while (i <= n) {
            while (i <= n && pushed[i] != poped[j]) {
                sk[++tp] = pushed[i];
                i++;
            }
            if (pushed[i] == poped[j]) i++, j++;
            while (j <= n && sk[tp] == poped[j]) {
                tp--;
                j++;
            }
        }
        while (j <= n && sk[tp] == poped[j]) tp--, j++;
        if (tp == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}