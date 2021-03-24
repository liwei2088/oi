#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int a, b, q[10];
    scanf("%d%d", &a, &b);
    bool f = false;
    for (int i = a; i <= b; i++) {
        int k = i, c = 0;
        while (k) {
            q[++c] = k % 10;
            k /= 10;
        }
        int p = q[1] - q[2];
        bool succ = true;
        for (int j = 2; j < c; j++)
            if (q[j] - q[j + 1] != p) {
                succ = false;
                break;
            }
        if (succ) {
            printf("%d ", i);
            f = true;
        }
    }
    if (!f) printf("-1");
    return 0;
}