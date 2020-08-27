#include <iostream>
using namespace std;
int w[85];
int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int mx = 0;
    for (int i = 1; i <= s1; i++)
        for (int j = 1; j <= s2; j++)
            for (int k = 1; k <= s3; k++) {
                w[i + j + k]++;
                mx = max(mx, w[i + j + k]);
            }
    for (int i = 3; i <= 80; i++)
        if (w[i] == mx) {
            cout << i;
            return 0;
        }
    return 0;
}