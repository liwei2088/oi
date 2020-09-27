#include <iostream>
using namespace std;

int main() {
    int n, t1, t2, t3, t4, f, t5, t6, t7, t8;
    cin >> n;
    cin >> t1 >> t2 >> t3 >> t4;
    int ans = 0;
    while (n--) {
        cin >> f >> t5 >> t6 >> t7 >> t8;
        int s1 = 0, s2 = 0;
        if (f == 1) {
            s1 = t5 + t1 + t6;
            s2 = t7 + t3 + t8;
        } else {
            s1 = t5 + t2 + t6;
            s2 = t7 + t4 + t8;
        }
        ans += min(s1, s2);
    }
    cout << ans;
    return 0;
}