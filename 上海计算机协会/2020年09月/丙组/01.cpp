#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        if (n % i == 0) {
            int k = sqrt(i);
            if (k * k == i) {
                cout << i << endl;
                return 0;
            }
        }
    }
    return 0;
}