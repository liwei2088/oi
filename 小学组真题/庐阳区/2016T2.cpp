#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s, t;
        cin >> s;
        t = s;
        reverse(s.begin(), s.end());
        if (s == t)
            cout << "T" << endl;
        else
            cout << "F" << endl;
    }
    return 0;
}