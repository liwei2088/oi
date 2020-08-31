#include <iostream>
using namespace std;
int f[85];
int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int ans = 0;
    for (int i = 1; i <= s1; i++)
        for (int j = 1; j <= s2; j++)
            for (int k = 1; k <= s3; k++) {
                f[i + j + k]++;
                ans = max(ans, f[i + j + k]);
            }
    for (int i = 1; i <= 80; i++)
        if (f[i] == ans) {
            cout << i;
            return 0;
        }
    return 0;
}