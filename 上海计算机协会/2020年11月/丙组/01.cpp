#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i % 7 == 0 || i % 10 == 7)
            cout << "pass" << endl;
        else
            cout << i << endl;
    }
    return 0;
}