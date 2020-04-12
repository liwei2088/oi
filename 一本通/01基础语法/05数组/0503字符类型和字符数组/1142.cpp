#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    bool first = true;
    while (cin >> s) {
        if (first)
            cout << s.size(), first = false;
        else
            cout << "," << s.size();
    }
    return 0;
}
