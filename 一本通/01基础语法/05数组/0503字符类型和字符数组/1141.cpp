#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    int n = s.size();
    if (s.substr(n - 2) == "er")
        s = s.substr(0, n - 2);
    else if (s.substr(n - 2) == "ly")
        s = s.substr(0, n - 2);
    else if (s.substr(n - 3) == "ing")
        s = s.substr(0, n - 3);
    cout << s;
    return 0;
}