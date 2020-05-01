#include <cstring>
#include <iostream>
using namespace std;
int n;
string a, b;
int main() {
    cin >> n;
    while (n--) {
        cin >> a >> b;
        int n = a.size();
        a.insert(n / 2, b);
        cout << a << endl;
    }
    return 0;
}