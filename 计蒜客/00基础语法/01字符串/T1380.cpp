#include <cstring>
#include <iostream>
using namespace std;
string s;
int n, k;
int main() {
    cin >> n;
    while (n--) {
        cin >> s >> k;
        k = s.find('.') + k;
        if (k < s.size())
            cout << s[k] << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}