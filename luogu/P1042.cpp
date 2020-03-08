#include <cmath>
#include <iostream>
using namespace std;

char s[70000];

int main() {
    char ch;
    int i = 0, n = 0, lt = 0, rt = 0;
    while (cin >> ch) {
        if (ch == 'E') break;
        if (ch == 'W' || ch == 'L') s[++i] = ch;
    }
    n = i;
    for (i = 1; i <= n; i++) {
        if (s[i] == 'W') lt++;
        if (s[i] == 'L') rt++;
        if ((lt >= 11 || rt >= 11) && abs(lt - rt) >= 2) {
            cout << lt << ":" << rt << endl;
            lt = 0, rt = 0;
        }
    }
    cout << lt << ":" << rt << endl;
    lt = 0, rt = 0;
    cout << endl;
    for (i = 1; i <= n; i++) {
        if (s[i] == 'W') lt++;
        if (s[i] == 'L') rt++;
        if ((lt >= 21 || rt >= 21) && abs(lt - rt) >= 2) {
            cout << lt << ":" << rt << endl;
            lt = 0, rt = 0;
        }
    }
    cout << lt << ":" << rt << endl;
    system("pause");
    return 0;
}