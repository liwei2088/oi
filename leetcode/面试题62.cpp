#include <iostream>
using namespace std;

// int lastRemaining(int n, int m) {
//     bool f[100005];
//     int t = 0, i = 0, j = 0;
//     int ans = 0;
//     while (t < n) {
//         if (i == n) i = 0;
//         if (!f[i]) {
//             j++;
//             if (j == m) {
//                 f[i] = true;
//                 ans = i;
//                 j = 0;
//                 t++;
//             }
//         }
//         i++;
//     }
//     return ans;
// }

//约瑟夫环
int lastRemaining(int n, int m) {
    int ans = 0;
    for (int i = 2; i <= n; i++) ans = (ans + m) % i;
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << lastRemaining(n, m);
    return 0;
}