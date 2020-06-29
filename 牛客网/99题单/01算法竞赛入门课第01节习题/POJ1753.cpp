#include <cstring>
#include <iostream>
using namespace std;
int mp[5][5], t[5][5], ans = 1e9;
bool flag;
int main() {
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 4; j++) {
            char ch;
            cin >> ch;
            if (ch == 'w')
                mp[i][j] = 0;
            else
                mp[i][j] = 1;
        }
    for (int k = 0; k < 16; k++) {  //枚举 2^4种可能
        //首先处理第一行
        memcpy(t, mp, sizeof(mp));
        int cnt = 0;
        for (int j = 1; j <= 4; j++)
            if (k >> (j - 1) & 1) {
                t[1][j] ^= 1;
                t[0][j] ^= 1;
                t[1][j - 1] ^= 1;
                t[1][j + 1] ^= 1;
                t[2][j] ^= 1;
                cnt++;
            }
        for (int i = 2; i < 4; i++)
            for (int j = 1; j <= 4; j++)
                if (t[i - 1][j] == 1) {
                    t[i][j] ^= 1;
                    t[i - 1][j] ^= 1;
                    t[i][j - 1] ^= 1;
                    t[i][j + 1] ^= 1;
                    t[i + 1][j] ^= 1;
                    cnt++;
                }
        bool f = true;
        for (int j = 1; j <= 4; j++)
            if (t[4][j] == 1) {
                f = false;
                break;
            }
        if (f == true) {
            ans = min(ans, cnt);
            flag = true;
        }
    }
    if (flag == true)
        cout << ans;
    else
        cout << "Impossible";
    return 0;
}