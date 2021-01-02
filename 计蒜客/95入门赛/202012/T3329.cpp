#include <cstdio>
#include <iostream>
using namespace std;
int n, x, t;
int main() {
    scanf("%d%d", &n, &x);
    int a = 0, b = 0, c = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &t);
        if (t < x)
            a++;
        else if (t == x)
            b++;
        else
            c++;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}