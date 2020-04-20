#include <iostream>
#include <vector>
using namespace std;
int dr[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
void dfs(int x, int y, vector<vector<char>>& grid) {
    int n = grid.size(), m = grid[0].size();
    grid[x][y] = '0';
    for (int i = 0; i < 4; i++) {
        int xx = x + dr[i][0];
        int yy = y + dr[i][1];
        if (xx >= 0 && xx < n && yy >= 0 && yy < m && grid[xx][yy] == '1')
            dfs(xx, yy, grid);
    }
}
int numIslands(vector<vector<char>>& grid) {
    int n = grid.size();
    if (n == 0) return 0;
    int m = grid[0].size(), res = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (grid[i][j] == '1') dfs(i, j, grid), res++;
    return res;
}
int main() {
    vector<vector<char>> g;
    int n;
    char x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        vector<char> t;
        string s;
        cin >> s;
        for (int j = 0; s[i]; j++) t.push_back(s[j]);
        g.push_back(t);
    }
    cout << numIslands(g);
    return 0;
}