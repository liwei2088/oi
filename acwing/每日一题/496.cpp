#include <iostream>
#include <queue>
using namespace std;

const int N = 1010;

int m, n;
bool st[N];

int main() {
    cin >> m >> n;
    queue<int> q;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (!st[x]) {
            if (q.size() == m) {
                int t = q.front();
                st[t] = false;
                q.pop();
            }
            q.push(x);
            st[x] = true;
            res++;
        }
    }
    cout << res;
    return 0;
}