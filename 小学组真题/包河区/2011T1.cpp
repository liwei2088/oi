#include <iostream>
using namespace std;

int main() {
    int n, m, s = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++) s += i;
    cout << s;
    return 0;
}