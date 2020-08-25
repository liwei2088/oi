#include <iostream>
using namespace std;
string ans;
int main() {
    char ch;
    while (cin >> ch) ans = ch + ans;
    cout << ans;
    return 0;
}