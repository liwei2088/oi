#include <cstdio>
#include <iostream>
using namespace std;
int n;
int ss[] = {2, 3, 5};
int main() {
    scanf("%d", &n);
    int m = 0;
    while (n) {
        m++;
        int t = m;
        for (int i = 0; i < 3; i++) {
            while (t % ss[i] == 0) t /= ss[i];
        }
        if (t == 1) n--;
    }
    printf("%d", m);
    return 0;
}