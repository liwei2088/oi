#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int a = 0; a <= 50; a++)
        for (int b = a; b <= 50; b++)
            for (int c = b; c * c <= n; c++)
                for (int d = c; d * d <= n; d++)
                    if (a * a + b * b + c * c + d * d == n) {
                        printf("%d %d %d %d", a, b, c, d);
                        return 0;
                    }
    return 0;
}