#include <cstdio>
#include <iostream>
#include <set>
using namespace std;
int a[40][40], n, m;
;
set<int> st;

bool ckrow() {
    for (int i = 1; i <= m; i++) {
        st.clear();
        for (int j = 1; j <= m; j++) {
            int k = a[i][j];
            if (k >= 1 && k <= m) st.insert(a[i][j]);
        }
        if (st.size() != m) return false;
    }
    return true;
}

bool ckcol() {
    for (int i = 1; i <= m; i++) {
        st.clear();
        for (int j = 1; j <= m; j++) {
            int k = a[j][i];
            if (k >= 1 && k <= m) st.insert(a[j][i]);
        }
        if (st.size() != m) return false;
    }
    return true;
}

bool ckcub() {
    for (int x = 1; x <= m; x += n)
        for (int y = 1; y <= m; y += n) {
            st.clear();
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++) {
                    int k = a[x + i][y + j];
                    if (k >= 1 && k <= m) st.insert(a[x + i][y + j]);
                }
            if (st.size() != m) return false;
        }
    return true;
}

int main() {
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++) {
        cin >> n;
        m = n * n;
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= m; j++) cin >> a[i][j];
        if (ckrow() && ckcol() && ckcub())
            cout << "Case #" << k << ": Yes" << endl;
        else
            cout << "Case #" << k << ": No" << endl;
    }
    return 0;
}