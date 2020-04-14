#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > updateMatrix(vector<vector<int> >& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    //初始化距离为最大值 为何要除以2 因为后面有加法运算 防止越界
    vector<vector<int> > res(n, vector<int>(m, INT_MAX / 2));
    //将所有的 0 的距离全部设置为 0
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (matrix[i][j] == 0) res[i][j] = 0;
    //其实只要扫描2个方向 一个是从左上到右下 一个是从右下到左上
    //处理四个方向的移动中 左和上
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            if (i - 1 >= 0) res[i][j] = min(res[i][j], res[i - 1][j] + 1);
            if (j - 1 >= 0) res[i][j] = min(res[i][j], res[i][j - 1] + 1);
        }
    for (int i = n - 1; i >= 0; i--)
        for (int j = m - 1; j >= 0; j--) {
            if (i + 1 < n) res[i][j] = min(res[i][j], res[i + 1][j] + 1);
            if (j + 1 < m) res[i][j] = min(res[i][j], res[i][j + 1] + 1);
        }
    return res;
}

int main() {
    vector<vector<int> > g;
    int n, m, x;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        vector<int> t;
        for (int j = 1; j <= m; j++) {
            cin >> x;
            t.push_back(x);
        }
        g.push_back(t);
    }
    vector<vector<int> > res = updateMatrix(g);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}