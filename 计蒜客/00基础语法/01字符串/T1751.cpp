#include <cstdio>
#include <iostream>
using namespace std;
const int N = 55;
int n;
string s[N], t;
char res[N];
char g[4][8] = {{'*', '*', '*', 'A', 'B', 'C', 'D', 'E'},
                {'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'},
                {'N', 'O', 'P', 'Q', 'I', 'S', 'T', 'U'},
                {'V', 'W', 'X', 'Y', 'Z', '*', '*', '*'}};
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> s[i];
    cin >> t;
    int u = 0;
    for (int i = 1; i <= n; i++) {
        int pos = s[i].find(t);
        while (pos != -1) {
            if (pos + t.size() < s[i].size()) res[++u] = s[i][pos + t.size()];
            pos++;
            pos = s[i].find(t, pos);
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            char ch = '*';
            for (int k = 1; k <= u; k++)
                if (g[i][j] == res[k]) {
                    ch = res[k];
                    break;
                }
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}