#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1 || n == 2) {
        printf("1.00");
    }
    double f1 = 1, f2 = 1, fn;
    for (int i = 3; i <= n; i++) {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    printf("%.2lf", fn);
    return 0;
}