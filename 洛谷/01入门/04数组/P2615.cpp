#include <iostream>
using namespace std;
int n, a[45][45];
int main() {
    cin >> n;
    int row = 1, col = (n + 1) / 2;
    a[row][col] = 1;
    for (int k = 2; k <= n * n; k++) {
        if (row == 1 && col != n)
            row = n, col++;
        else if (col == n && row != 1)
            col = 1, row--;
        else if (row == 1 && col == n)
            row++;
        else {
            if (row != 1 && col != n && a[row - 1][col + 1] == 0)
                row--, col++;
            else
                row++;
        }
        a[row][col] = k;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}