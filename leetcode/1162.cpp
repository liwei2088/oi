#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

//多源 BFS
int maxDistance(vector<vector<int> >& grid) {
    int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, -1, 1};
    queue<pair<int, int> > q;
    int n = grid.size();
    //首先将所有的土地入队，从陆地搜索海洋，最后找到的海洋应该就是最远的距离
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (grid[i][j]) q.push(make_pair(i, j));
    if (q.size() == 0 || q.size() == n * n) return -1;
    int ans = -1;
    while (!q.empty()) {
        int m = q.size();
        ans++;
        //一次遍历所有的陆地，看与陆地相接是否有海洋
        while (m--) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int xx = x + dx[i];
                int yy = y + dy[i];
                if (xx >= 0 && xx < n && yy >= 0 && yy < n &&
                    grid[xx][yy] == 0) {
                    grid[xx][yy] = 1;
                    q.push(make_pair(xx, yy));
                }
            }
        }
    }
    return ans;
}

int main() {
    int n, x;
    vector<vector<int> > g;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        vector<int> t;
        for (int j = 1; j <= n; j++) {
            cin >> x;
            t.push_back(x);
        }
        g.push_back(t);
    }
    cout << maxDistance(g);
    return 0;
}