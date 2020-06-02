#include <iostream>
#include <vector>
using namespace std;
const int N = 105;
struct node {
    string name;
    int cnt;
} q[N];
int n;
int main() {
    string s;
    int ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> q[i].name >> s;
        int c = 0;
        int pos = s.find("sos");
        while (pos != -1) {
            c++;
            pos = s.find("sos", pos + 1);
        }
        q[i].cnt = c;
        ans = max(ans, c);
    }
    for (int i = 1; i <= n; i++)
        if (q[i].cnt == ans) cout << q[i].name << " ";
    cout << endl;
    cout << ans;
    return 0;
}