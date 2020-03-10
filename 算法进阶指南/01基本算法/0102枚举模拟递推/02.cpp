#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> q;

void dfs(int k, int s) {
    if (k == n) {
        for (int i = 0; i < q.size(); i++) cout << q[i] + 1 << " ";
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++)
        if (!(s >> i & 1)) {
            q.push_back(i);
            dfs(k + 1, s | 1 << i);
            q.pop_back();
        }
}

int main() {
    cin >> n;
    dfs(0, 0);
    return 0;
}