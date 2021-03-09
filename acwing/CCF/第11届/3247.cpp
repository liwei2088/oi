#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n / 50 * 7 + n % 50 / 30 * 4 + n % 50 % 30 / 10;
    return 0;
}