#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && a == c)
        cout << "Can";
    else
        cout << "No";
    return 0;
}