/**
 * 由于T比较大，考虑时间复杂度 先计算周期 然后计算余数
 */

#include <iostream>
using namespace std;
string s;
int t, len;

void move(int &x, int &y, int k) {
    int i = 0;
    while (k--) {
        if (s[i % len] == 'E')
            x++;
        else if (s[i % len] == 'S')
            y--;
        else if (s[i % len] == 'W')
            x--;
        else
            y++;
        i++;
    }
}

int main() {
    int x = 0, y = 0;
    int u = 0, v = 0;
    cin >> s >> t;
    len = s.size();
    move(u, v, len);
    int k = t / len;
    x += k * u, y += k * v;
    move(x, y, t % len);
    cout << x << " " << y;
    return 0;
}