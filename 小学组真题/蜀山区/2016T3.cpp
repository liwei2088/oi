#include <iostream>
#include <queue>
using namespace std;
int n, k;
queue<pair<int, int> > q;
bool st[100005];
int bfs(int x) {
    q.push({x, 0});
    st[x] = true;
    while (!q.empty()) {
        int fx = q.front().first;
        int fs = q.front().second;
        q.pop();
        if (fx == k) return fs;
        if (fx + 1 >= 0 && fx + 1 <= 100000 && st[fx + 1] == false) {
            q.push({fx + 1, fs + 1});
            st[fx + 1] = true;
        }
        if (fx - 1 >= 0 && fx - 1 <= 100000 && st[fx - 1] == false) {
            q.push({fx - 1, fs + 1});
            st[fx - 1] = true;
        }
        if (fx * 2 >= 0 && fx * 2 <= 100000 && st[fx * 2] == false) {
            q.push({fx * 2, fs + 1});
            st[fx * 2] = true;
        }
    }
    return -1;
}

int main() {
    cin >> n >> k;
    if (n >= k)
        cout << n - k << endl;
    else
        cout << bfs(n);
    return 0;
}