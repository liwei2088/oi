#include <iostream>
#include <vector>
using namespace std;
vector<int> a;
int n, m;
int main() {
    int x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a.push_back(x);
    }
    cin >> m;
    int ans = 0;
    for (int i = 0; i < a.size(); i++)
        if (a[i] == m) ans++;
    cout << ans;
    return 0;
}