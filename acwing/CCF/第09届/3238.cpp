#include <cstdio>
#include <iostream>
using namespace std;

int get(int s) {
    if (s <= 3500) return s;
    int a[] = {0, 1500, 4500, 9000, 35000, 55000, 80000, 1000000};
    int b[] = {0, 3, 10, 20, 25, 30, 35, 45};

    int A = s - 3500;
    int tax = 0;
    for (int i = 1; i <= 7; i++) {
        if (A >= a[i - 1]) {
            tax += (min(A, a[i]) - a[i - 1]) / 100 * b[i];
        }
    }
    return A + 3500 - tax;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int s = 0; ; s += 100) {
        if (get(s) == t) {
            printf("%d\n", s);
            break;
        }
    }
    return 0;
}