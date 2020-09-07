#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int m, x, s = 0;
        cin >> m;
        for (int i = 1; i <= m; i++) cin >> x, s += x;
        if (s % 3 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}