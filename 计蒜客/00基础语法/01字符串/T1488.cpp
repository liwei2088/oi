#include <cstring>
#include <iostream>
using namespace std;
int m, n;
string s, t;
int main() {
    cin >> m;
    while (m--) {
        cin >> s;
        cin >> n;
        n %= s.size();
        t = s + s;
        cout << t.substr(s.size() - n, s.size()) << endl;
    }
    return 0;
}