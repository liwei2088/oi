#include <cctype>
#include <cmath>
#include <iostream>
using namespace std;

int myAtoi(string str) {
    int res = 0, i = 0, k = 1;
    //去除空格
    while (str[i] == ' ') i++;
    //处理正负号
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
        k = -1, i++;
    else if (!isdigit(str[i]))
        return 0;
    //处理数字
    while (str[i] && isdigit(str[i])) {
        int x = str[i] - '0';
        if (res > (INT_MAX - x) / 10) {
            return k == 1 ? INT_MAX : INT_MIN;
        }
        res = res * 10 + x;
        i++;
    }
    return res * k;
}

int main() {
    string s;
    cin >> s;
    cout << myAtoi(s);
    return 0;
}