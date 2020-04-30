#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    int n = s.size();
    if (n >= 2 && s.substr(n - 2) == "er")
        cout << s.substr(0, n - 2);
    else if (n >= 2 && s.substr(n - 2) == "ly")
        cout << s.substr(0, n - 2);
    else if (n >= 3 && s.substr(n - 3) == "ing")
        cout << s.substr(0, n - 3);
    else
        cout << s;
    return 0;
}