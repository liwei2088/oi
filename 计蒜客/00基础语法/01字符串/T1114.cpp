#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string a, b;
int main() {
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int i;
    for (i = 0; i < n && i < m; i++)
        if (tolower(a[i]) > tolower(b[i])) {
            cout << ">";
            return 0;
        } else if (tolower(a[i]) < tolower(b[i])) {
            cout << "<";
            return 0;
        }
    if (i < n)
        cout << ">";
    else if (i < m)
        cout << "<";
    else
        cout << "=";
    return 0;
}