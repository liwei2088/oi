#include <cstring>
#include <iostream>
using namespace std;
int n;
string s;
int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        for (int i = 0; s[i]; i += 2) swap(s[i], s[i + 1]);
        cout << s << endl;
    }
    return 0;
}