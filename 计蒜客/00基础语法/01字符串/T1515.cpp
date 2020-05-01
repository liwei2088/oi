#include <cstring>
#include <iostream>
#include <stack>
using namespace std;
string s;
int main() {
    while (cin >> s) {
        stack<char> q;
        for (int i = 0; s[i]; i++)
            if (s[i] == '(')
                q.push('(');
            else if (s[i] == ')')
                q.pop();
            else {
                cout << q.size() << endl;
                break;
            }
    }
    return 0;
}