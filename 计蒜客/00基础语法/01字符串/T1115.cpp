#include <algorithm>
#include <iostream>
using namespace std;
string a, b;
int main() {
    getline(cin, a);
    getline(cin, b);
    int n = a.size(), m = b.size();
    int i = 0, j = 0;
    while (i < n && j < m) {
        while (i < n && a[i] == ' ') i++;
        while (j < m && b[j] == ' ') j++;
        if (tolower(a[i]) != tolower(b[j])) {
            cout << "NO";
            return 0;
        }
        i++;
        j++;
    }
    if (i < n || j < m)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}