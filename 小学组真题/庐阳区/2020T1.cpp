#include <iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z')
        cout << char('A' + 'Z' - c);
    else
        cout << char('a' + 'z' - c);
    return 0;
}