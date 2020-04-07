#include <iostream>
#include <vector>
using namespace std;
int dx[] = {1, -1, 0, 0, 1, -1, 1, -1}, dy[] = {0, 0, 1, -1, 1, -1, -1, 1};

void gameOfLife(vector<vector<int> >& board) {
    vector<vector<int> > t(board);
    int n = board.size(), m = board[0].size();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            int cnt = 0;
            for (int k = 0; k < 8; k++) {
                int xx = i + dx[k], yy = j + dy[k];
                if (xx < n && xx >= 0 && yy < m && yy >= 0 && t[xx][yy] == 1)
                    cnt++;
            }
            if (t[i][j] == 1 && cnt < 2) board[i][j] = 0;
            if (t[i][j] == 1 && (cnt == 2 || cnt == 3)) board[i][j] = 1;
            if (t[i][j] == 1 && cnt > 3) board[i][j] = 0;
            if (t[i][j] == 0 && cnt == 3) board[i][j] = 1;
        }
}

int main() {
    vector<vector<int> > g;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        vector<int> t;
        for (int j = 1; j <= m; j++) {
            int x;
            cin >> x;
            t.push_back(x);
        }
        g.push_back(t);
    }
    gameOfLife(g);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << g[i][j];
        cout << endl;
    }
    return 0;
}