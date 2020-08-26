#include <iostream>
using namespace std;

int a, b, c;

void disp(char ch) {
    if (ch == 'A')
        cout << a << " ";
    else if (ch == 'B')
        cout << b << " ";
    else
        cout << c << " ";
}

int main() {
    char ch;
    cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    cin >> ch;
    disp(ch);
    cin >> ch;
    disp(ch);
    cin >> ch;
    disp(ch);
    return 0;
}