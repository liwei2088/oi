#include <iostream>
using namespace std;

void work(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int c = 0;
            while (n % i == 0) {
                n /= i;
                c++;
            }
            cout << i << " " << c << endl;
        }
    }
    if (n > 1) cout << n << " 1" << endl;
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        work(x);
    }
    return 0;
}