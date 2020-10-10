#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x == 1)
            a++;
        else
            b++;
    }
    if (a == b)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}