#include <iostream>
using namespace std;
int n;
struct node {
    int a, b, c;
} q[105];

bool check(int x) {
    int g1 = x % 10, s1 = x / 10 % 10, b1 = x / 100 % 10, q1 = x / 1000;
    for (int i = 1; i <= n; i++) {
        int g2 = q[i].a % 10, s2 = q[i].a / 10 % 10, b2 = q[i].a / 100 % 10,
            q2 = q[i].a / 1000;
        int c1 = 0, c2 = 0;
        if (g1 == g2) c1++;
        if (s1 == s2) c1++;
        if (b1 == b2) c1++;
        if (q1 == q2) c1++;
        if(g1==g2 || g1==s2 || g1==b2 || g1==q2)
    }
}

int main() {
    while (cin >> n && n) {
        for (int i = 1; i <= n; i++) cin >> q[i].a >> q[i].b >> q[i].c;
        int ans = -1;
        for (int i = 1000; i <= 9999; i++) {
            if (check(i)) {
                ans = i;
                break;
            }
        }
        if (ans == -1)
            cout << "Not sure" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}