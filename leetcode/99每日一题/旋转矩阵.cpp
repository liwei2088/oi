#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int> >& matrix) {
    int n = matrix.size();
    //先进行对角线为轴进行翻转
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) swap(matrix[i][j], matrix[j][i]);
    //再对每行的中心进行翻转
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n / 2; j++)
            swap(matrix[i][j], matrix[i][n - 1 - j]);
}

int main() {
    vector<vector<int> > g;
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        vector<int> t;
        for (int j = 1; j <= n; j++) {
            cin >> x;
            t.push_back(x);
        }
        g.push_back(t);
    }
    rotate(g);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << g[i][j] << " ";
        cout << endl;
    }
    return 0;
}