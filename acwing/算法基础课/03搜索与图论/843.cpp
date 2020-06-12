#include <iostream>
using namespace std;
const int N = 20;
int n, row[N];
bool col[N], dg[N], udg[N];

void dfs(int k) {
    if (k == n + 1) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++)
                if (row[i] == j)
                    cout << "Q";
                else
                    cout << ".";
            cout << endl;
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
        if (!col[i] && !dg[k + i] && !udg[n - k + i]) {
            row[k] = i;
            col[i] = dg[k + i] = udg[n - k + i] = true;
            dfs(k + 1);
            col[i] = dg[k + i] = udg[n - k + i] = false;
        }
}

int main() {
    cin >> n;
    dfs(1);
    return 0;
}