#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    n = n % 5;
    if (n >= 1 && n <= 3)
        cout << "Fishing" << endl;
    else
        cout << "Lying" << endl;
    return 0;
}