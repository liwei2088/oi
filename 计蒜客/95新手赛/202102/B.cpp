#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int d1, t1, d2, t2;
    cin >> d1 >> t1 >> d2 >> t2;
    if (d2 - d1 < 7 || (d2 - d1 == 7 && t2 <= t1))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}