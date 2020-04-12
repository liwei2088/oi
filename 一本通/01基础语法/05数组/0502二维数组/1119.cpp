#include <iostream>
using namespace std;
int g[6][6], n, m;
int main() {
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++) cin >> g[i][j];
    cin >> n >> m;
    for (int i = 1; i <= 5; i++) swap(g[n][i], g[m][i]);
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) cout << g[i][j] << " ";
        cout << endl;
    }
    return 0;
}