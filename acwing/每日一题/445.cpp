#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 0;
    while (n) {
        s = s * 10 + n % 10;
        n /= 10;
    }
    cout << s;
    return 0;
}