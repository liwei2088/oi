#include <iostream>
using namespace std;
int n, m;
string s1, s2;
int main() {
    cin >> n >> m;
    cin >> s1 >> s2;
    int ans = 0, x = 0, y = 0, t = 0;
    for (int i = 0; i < m; i++) {
        if (s1[i] == s2[i] && s1[i] == 'y')
            y++;
        else if (s1[i] == s2[i] && s1[i] == 'x')
            x++;
        else
            t++;
    }
    while (n--) {
        x = 2 * x + y + t;
        m *= 2;
        t = m - x - y;
    }
    cout << x + y;
    return 0;
}