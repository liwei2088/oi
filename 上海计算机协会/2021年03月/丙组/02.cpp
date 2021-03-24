#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) printf("*");
    printf("\n");
    for (int i = 2; i <= n - 1; i++) {
        printf("*");
        for (int j = 2; j <= n - 1; j++) printf(" ");
        printf("*");
        printf("\n");
    }
    for (int i = 1; i <= n; i++) printf("*");
    printf("\n");
    return 0;
}