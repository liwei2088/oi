#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) printf("%02d", k++);
        cout << endl;
    }
    cout << endl;
    k = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = n - i - 1; j >= 0; j--) printf("  ");
        for (int j = 1; j <= i; j++) printf("%02d", k++);
        cout << endl;
    }
    return 0;
}