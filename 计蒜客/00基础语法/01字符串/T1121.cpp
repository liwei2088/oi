#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    bool f = true;
    while (cin >> s) {
        if (f)
            cout << s.size(), f = false;
        else
            cout << "," << s.size();
    }
    return 0;
}