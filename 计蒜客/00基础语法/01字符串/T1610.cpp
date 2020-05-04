#include <cstring>
#include <iostream>
using namespace std;
int n;
string a, b, c;
int main() {
    cin >> n;
    cin >> a >> c;
    for (int i = 0; i < n; i++)
        if (a[i] == c[i]) {
            char ch = c[i] + 1 > 'z' ? 'z' : c[i] + 1;
            b.push_back(ch);
        } else if (a[i] > c[i]) {
            b.push_back(c[i]);
        } else {
            cout << "-1";
            return 0;
        }
    cout << b;
    return 0;
}