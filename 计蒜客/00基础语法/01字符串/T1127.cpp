#include <cstring>
#include <iostream>
using namespace std;
string s, q;
int main() {
    cin >> s >> q;
    int n = s.size(), m = q.size();
    q += q, s += s;
    for (int i = m; i >= 1; i--)
        for (int j = 0; j < m; j++) {
            if (s.find(q.substr(j, i)) != -1) {
                cout << i;
                return 0;
            }
        }
    return 0;
}
