#include <cstring>
#include <iostream>
using namespace std;
string a, b;
int main() {
    int res = 0;
    getline(cin, a);
    getline(cin, b);
    int n = a.size(), m = b.size();
    for (int i = 0; i < n && i < m; i++)
        if (a[i] == b[i]) cout << i + 1 << " ";
    return 0;
}