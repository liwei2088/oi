#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 100005;
string A, B;
int c[N], lc;
int main() {
    cin >> A >> B;
    //注意一定要先比较大小再反序相减
    int la = A.size(), lb = B.size();
    if (la < lb || (la == lb && A < B)) {
        swap(A, B);
        swap(la, lb);
        cout << "-";
    }
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    int t = 0;
    for (int i = 0; i < la; i++) {
        t += A[i] - '0';
        if (i < lb) t -= B[i] - '0';
        c[++lc] = (t + 10) % 10;
        if (t < 0)
            t = -1;
        else
            t = 0;
    }
    while (c[lc] == 0 && lc > 1) lc--;
    for (int i = lc; i >= 1; i--) cout << c[i];
    return 0;
}