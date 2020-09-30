#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 2 || a == 1 && b == 0 || a == 2 && b == 1)
        cout << "w" << endl;
    else if (a == 0 && b == 0 || a == 1 && b == 1 || a == 2 && b == 2)
        cout << "F" << endl;
    else
        cout << "L" << endl;
    return 0;
}