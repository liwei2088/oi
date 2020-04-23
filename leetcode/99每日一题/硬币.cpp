#include <iostream>
using namespace std;
int v[4] = {1, 5, 10, 25};
int f[1000005];

int waysToChange(int n) {
    f[0] = 1;
    for (int i = 0; i < 4; i++)
        for (int j = v[i]; j <= n; j++)
            f[j] = (f[j] + f[j - v[i]]) % 1000000007;
    return f[n];
}

int main() {
    int n;
    cin >> n;
    cout << waysToChange(n);
    return 0;
}