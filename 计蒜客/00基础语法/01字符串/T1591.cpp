#include <cstring>
#include <iostream>
using namespace std;
string s;
int n;
int main() {
    cin >> n;
    cin >> s;
    int i = 1, j = 1;
    while (i <= n) {
        cout << s[i - 1];
        i += j++;
        cout << i << endl;
    }
    return 0;
}