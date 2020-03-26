#include <iostream>
#include <vector>
using namespace std;

int numRookCaptures(vector<vector<char>>& board) {
    pair<int, int> R;
    int n = board.size();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (board[i][j] == 'R') R = make_pair(i, j);
    int res = 0;
    for (int j = R.second - 1; j >= 0; j--) {
        if (board[R.first][j] == 'B') break;
        if (board[R.first][j] == 'p') {
            res++;
            break;
        }
    }
    for (int j = R.second + 1; j < n; j++) {
        if (board[R.first][j] == 'B') break;
        if (board[R.first][j] == 'p') {
            res++;
            break;
        }
    }
    for (int i = R.first - 1; i >= 0; i--) {
        if (board[i][R.second] == 'B') break;
        if (board[i][R.second] == 'p') {
            res++;
            break;
        }
    }
    for (int i = R.first + 1; i < n; i++) {
        if (board[i][R.second] == 'B') break;
        if (board[i][R.second] == 'p') {
            res++;
            break;
        }
    }
    return res;
}

int main() {
    int x;
    vector<vector<char>> g;
    for (int i = 1; i <= 8; i++) {
        vector<char> t;
        for (int j = 1; j <= 8; j++) {
            cin >> x;
            t.push_back(x);
        }
        g.push_back(t);
    }
    cout << numRookCaptures(g);
}