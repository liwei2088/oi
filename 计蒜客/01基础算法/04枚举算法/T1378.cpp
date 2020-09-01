#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        cout << s.substr(6, 4) << "-" << s.substr(10, 2) << "-"
             << s.substr(12, 2) << endl;
    }
    return 0;
}