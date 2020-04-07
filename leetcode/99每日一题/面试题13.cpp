#include <iostream>
#include <queue>
using namespace std;

int get(int x) {
    int res = 0;
    while (x) {
        res += x % 10;
        x /= 10;
    }
    return res;
}

int movingCount(int m, int n, int k) {
    if (k == 0) return 1;
    queue<pair<int, int> > q;
    int dx[2] = {0, 1};
    int dy[2] = {1, 0};
    vector<vector<int> > vis(m, vector<int>(n, 0));
    q.push(make_pair(0, 0));
    int ans = 1;
    while (!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        for (int i = 0; i < 2; i++) {
            int x = p.first + dx[i];
            int y = p.second + dy[i];
            if (x < 0 || x >= m || y < 0 || y >= n || vis[x][y] ||
                get(x) + get(y) > k)
                continue;
            q.push(make_pair(x, y));
            vis[x][y] = true;
            ans++;
        }
    }
    return ans;
}

int main() {
    int n, m, k;
    cin >> m >> n >> k;
    cout << movingCount(m, n, k);
    return 0;
}