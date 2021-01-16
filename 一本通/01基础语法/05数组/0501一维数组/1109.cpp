#include <cstdio>
#include <iostream>
using namespace std;
int n, m;
bool a[5005];
int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (j % i == 0) a[j] = !a[j];
    bool f = true;
    for (int i = 1; i <= n; i++)
        if (a[i]) {
            if (f)
                cout << i, f = false;
            else
                cout << "," << i;
        }
    return 0;
}