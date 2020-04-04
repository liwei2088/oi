#include <iostream>
#include <map>
#include <vector>
using namespace std;
map<int, map<int, int> > mp;
int main() {
    int n, q;
    cin >> n >> q;
    int t, i, j, k;
    while (q--) {
        cin >> t;
        if (t == 1) {
            cin >> i >> j >> k;
            mp[i][j] = k;
        } else {
            cin >> i >> j;
            cout << mp[i][j] << endl;
        }
    }
    return 0;
}