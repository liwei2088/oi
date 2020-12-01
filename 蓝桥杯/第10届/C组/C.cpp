#include <iostream>
using namespace std;
char a[100];
int tt;
int main() {
    int n;
    cin >> n;
    while (n != 0) {
        a[++tt] = n % 26 + 'A' - 1;
        n /= 26;
    }
    for (int i = tt; i >= 1; i--) cout << a[i];
    return 0;
}