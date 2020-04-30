#include <cstring>
#include <iostream>
using namespace std;
string a, b;
int main() {
    cin >> a >> b;
    int n = a.size(), m = b.size();
    for (int i = 0; i < n; i++) {
        int j = 0, k = i;
        while (k < n && j < m && a[k] == b[j]) k++, j++;
        if (j == m) {
            cout << i + 1;
            return 0;
        }
    }
    return 0;
}