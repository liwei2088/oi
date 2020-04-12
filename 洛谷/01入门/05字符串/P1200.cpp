#include <iostream>
using namespace std;
string a, b;
int main() {
    cin >> a >> b;
    long long sum1 = 1, sum2 = 1;
    for (int i = 0; a[i]; i++) sum1 *= a[i] - 'A' + 1;
    for (int i = 0; b[i]; i++) sum2 *= b[i] - 'A' + 1;
    if (sum1 % 47 == sum2 % 47) cout << "GO";
    else cout << "STAY";
    return 0;
}