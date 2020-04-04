#include <iostream>
using namespace std;
int sk[1005], tp;
int main() {
    char ch;
    int s = 0, x, y;
    while (cin >> ch && ch != '@') {
        if (ch >= '0' && ch <= '9')
            s = s * 10 + ch - '0';
        else if (ch == '.')
            sk[++tp] = s, s = 0;
        else {
            x = sk[tp--], y = sk[tp--];
            if (ch == '+')
                sk[++tp] = x + y;
            else if (ch == '-')
                sk[++tp] = y - x;
            else if (ch == '*')
                sk[++tp] = x * y;
            else
                sk[++tp] = y / x;
        }
    }
    cout << sk[tp];
    return 0;
}