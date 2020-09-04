#include <iostream>
using namespace std;
string s;
int n;
char t[10];
bool st[30];
void dfs(int k) {
    if (k == n) {
        cout << t << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (st[s[i] - 'a'] == false) {
            t[k] = s[i];
            st[s[i] - 'a'] = true;
            dfs(k + 1);
            st[s[i] - 'a'] = false;
        }
    }
}

int main() {
    cin >> s;
    n = s.size();
    dfs(0);
    return 0;
}