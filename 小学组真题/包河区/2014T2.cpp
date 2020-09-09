#include <iostream>
using namespace std;
string s;
int d[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char y[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
int main() {
    while (cin >> s) {
        int sum = 0, len = s.size();
        for (int i = 0; i < len - 1; i++) {
            sum += (s[i] - '0') * d[i];
        }
        if (s[len - 1] == y[sum % 11])
            cout << "Right" << endl;
        else
            s[len - 1] = y[sum % 11], cout << s << endl;
    }
    return 0;
}