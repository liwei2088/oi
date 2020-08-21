#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    while (cin >> n) {
        if (n != 6) break;
        cnt++;
    }
    if (cnt == 3)
        cout << "1000";
    else if (cnt == 2)
        cout << "100";
    else if (cnt == 1)
        cout << "10";
    else
        cout << "0";
    return 0;
}