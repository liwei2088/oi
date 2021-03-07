#include <cstdio>
#include <iostream>
using namespace std;
int s[1010];
int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    for (int a = 0; a <= 1000; a++)
        for (int b = 0; b <= 1000; b++)
            if (a * x + b * y <= 1000) s[a * x + b * y] = 1;
    for (int i = 1000; i >= 1; i--)
        if (s[i] == 0) {
            cout << i << endl;
            return 0;
        }
    return 0;
}