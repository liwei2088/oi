#include <iostream>
using namespace std;
int m;
int main() {
    int s = 0;
    cin >> m;
    for (int i = 1, j = 1; i < m; i++) {
        s += i;
        while (s > m) s -= j, j++;
        if (s == m) {
            cout << j << " " << i << endl;
        }
    }
    return 0;
}