#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 1; i <= n / 2; i++) {
        string x = s.substr(0, i);
        string y = s.substr(i, i);
        reverse(y.begin(), y.end());
        if (x == y) {
            cout << log2(n / i);
            return 0;
        }
    }
    cout << 0;
    return 0;
}