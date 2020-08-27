#include <cstdio>
#include <iostream>
using namespace std;
int a[10][10];
int main() {
    int n;
    cin >> n;
    int i = 1, j = 0, k = 1;
    while (k <= n * n) {
        while (a[i][j + 1] == 0 && j + 1 <= n) {
            j++;
            a[i][j] = k;
            k++;
        }
        while (a[i + 1][j] == 0 && i + 1 <= n) {
            i++;
            a[i][j] = k;
            k++;
        }
        while (a[i][j - 1] == 0 && j - 1 >= 1) {
            j--;
            a[i][j] = k;
            k++;
        }
        while (a[i - 1][j] == 0 && i - 1 >= 1) {
            i--;
            a[i][j] = k;
            k++;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) 
            printf("%3d", a[i][j]);
        cout << endl;
    }
    return 0;
}