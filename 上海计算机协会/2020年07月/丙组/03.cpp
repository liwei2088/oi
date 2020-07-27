/**
 * https://iai.sh.cn/problem/93
 *
 * 数根
 */

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    while (s.size() != 1) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) sum += s[i] - '0';
        string c;
        while (sum != 0) {
            c.push_back(sum % 10 + '0');
            sum /= 10;
        }
        s = c;
    }
    cout << s;
    return 0;
}