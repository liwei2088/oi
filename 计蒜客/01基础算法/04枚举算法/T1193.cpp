#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, n;
    cin >> n;
    for (int a = 2; a <= n; a++)
        for (int b = 2; b <= n; b++)
            for (int c = b + 1; c <= n; c++)
                for (int d = c + 1; d <= n; d++)
                    if (a * a * a == b * b * b + c * c * c + d * d * d) {
                        printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
                    }
    return 0;
}