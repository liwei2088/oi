#include <iostream>
using namespace std;
int m, k;
int main() {
    cin >> m >> k;
    if (m % 19 != 0) {
        cout << "NO";
        return 0;
    }
    int res = 0;
    while (m != 0) {
        if (m % 10 == 3) res++;
        m /= 10;
    }
    if (res == k)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}