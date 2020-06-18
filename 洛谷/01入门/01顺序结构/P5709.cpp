#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int m, t, s;
    cin >> m >> t >> s;
    int k = m - ceil(s * 1.0 / t);
    k = k > 0 ? k : 0;
    cout << k;
    return 0;
}