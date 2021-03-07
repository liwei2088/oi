#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1005;
int n, a[N];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    bool succ = false;
    for (int i = 1; i <= n; i++) {
        int big = 0, small = 0;
        for (int j = 1; j <= n; j++) {
            if (a[i] < a[j]) small++;
            if (a[i] > a[j]) big++;
        }
        if (small == big) {
            printf("%d\n", a[i]);
            return 0;
        }
    }
    puts("-1");
    return 0;
}