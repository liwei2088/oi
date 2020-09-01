#include <iostream>
using namespace std;
long long a[5][5];
int main() {
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++) cin >> a[i][j];
    long long ans = 0;
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            for (int k = 1; k <= 3; k++)
                if (i != j && i != k && j != k)
                    ans = max(ans, a[1][i] + a[2][j] + a[3][k]);
    cout << ans;
    return 0;
}