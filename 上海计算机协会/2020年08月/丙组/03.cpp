#include <cmath>
#include <iostream>
using namespace std;
int n;
struct node {
    string s;
    int a, b, c;
    bool f;
} q[1000005];

int main() {
    int cnt = 0;
    cin >> n;
    int mxa = 0, mxb = 0, mxc = 0;
    for (int i = 1; i <= n; i++) {
        cin >> q[i].s >> q[i].a >> q[i].b >> q[i].c;
        q[i].f = true;
        mxa = max(mxa, q[i].a);
        mxb = max(mxb, q[i].b);
        mxc = max(mxc, q[i].c);
    }
    for (int i = 1; i <= n; i++) {
        if (mxa - q[i].a >= 100 || mxb - q[i].b >= 100 || mxc - q[i].c >= 100)
            q[i].f = false, cnt++;
    }
    if (cnt == n) {
        cout << "There is no winner." << endl;
    } else {
        cout << "Winning list:" << endl;
        for (int i = 1; i <= n; i++)
            if (q[i].f == true) cout << q[i].s << endl;
    }
    return 0;
}