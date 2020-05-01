#include <algorithm>
#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
string a, b;
int main() {
    cin >> a >> b;
    if (a.size() != b.size()) {
        cout << "1" << endl;
        return 0;
    }
    if (a == b) {
        cout << "2" << endl;
        return 0;
    }
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if (a == b)
        cout << "3" << endl;
    else
        cout << "4" << endl;
    return 0;
}