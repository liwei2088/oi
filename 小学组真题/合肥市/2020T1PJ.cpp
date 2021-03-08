#include <iostream>
using namespace std;
int a;
long long b, c;
int main() {
    cin >> a >> b >> c;
    if (b == 0)
        cout << c / a + 1;
    else
        cout << c / a - (b - 1) / a;
    return 0;
}