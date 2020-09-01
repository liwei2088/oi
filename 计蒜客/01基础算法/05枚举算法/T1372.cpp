#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool f = false;
    for (int i = 0; i <= n / 5; i++)
        for (int j = 0; j <= n / 3; j++) {
            int k = (n - i * 5 - j * 3) * 3;
            if (i + j + k == n) {
                cout << i << " " << j << " " << k << endl;
                f = true;
            }
        }
    if (f == false) cout << "No Answer.";
    return 0;
}