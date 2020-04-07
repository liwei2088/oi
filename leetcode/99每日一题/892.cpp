#include <iostream>
#include <vector>
using namespace std;

/*
    先计算积木的表面积，然后减去相邻积木遮盖的面积（注意要*2）
    减去遮盖面积注意，我们通过二维数组扫描发现是按行遍历
    所以我们只需要处理右侧相邻和下侧相邻就可以，另外两个位置后面的积木会处理
*/
int surfaceArea(vector<vector<int> >& grid) {
    int n = grid.size(), res = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            int k = grid[i][j];
            if (k > 0) {
                res += (k << 2) + 2;
                res -= j + 1 < n ? min(grid[i][j], grid[i][j + 1]) << 1 : 0;
                res -= i + 1 < n ? min(grid[i][j], grid[i + 1][j]) << 1 : 0;
            }
        }
    return res;
}

int main() {
    vector<vector<int> > grid;
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        vector<int> t;
        for (int j = 1; j <= n; j++) {
            cin >> x;
            t.push_back(x);
        }
        grid.push_back(t);
    }

    cout << surfaceArea(grid);
    return 0;
}