#include <algorithm>
#include <cstring>
#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

string reverseWords(string s) {
    string t, res;
    stack<string> stk;
    stringstream sstream(s);
    while (sstream >> t) {
        stk.push(t);
    }
    if (stk.size() > 0) res += stk.top(), stk.pop();
    while (!stk.empty()) {
        res = res + " " + stk.top();
        stk.pop();
    }
    return res;
}

int main() {
    string str;
    getline(cin, str);
    str = reverseWords(str);
    cout << str;
    return 0;
}