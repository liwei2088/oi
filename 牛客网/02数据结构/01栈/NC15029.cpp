#include <iostream>
using namespace std;
char s[105], q[105], ch;
int tt;
int main() {
    while (cin >> s) {
        tt = 0;
        for (int i = 0; s[i]; i++) {
            q[++tt] = s[i];
            while (tt >= 2 && q[tt - 1] == q[tt]) {
                if (q[tt] == 'o') {
                    tt -= 2;
                    q[++tt] = 'O';
                } else {
                    tt -= 2;
                }
            }
        }
        for (int i = 1; i <= tt; i++) cout << q[i];
        cout << endl;
    }

    return 0;
}