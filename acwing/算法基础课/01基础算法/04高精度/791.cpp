#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 100005;
string A, B;
int c[N], lc;
int main() {
    cin >> A >> B;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    int la = A.size(), lb = B.size();
    int t = 0;
    for (int i = 0; i < la || i < lb; i++) {
        if (i < la) t += A[i] - '0';
        if (i < lb) t += B[i] - '0';
        c[++lc] = t % 10;
        t /= 10;
    }
    if (t) c[++lc] = t;
    for (int i = lc; i >=1; i--) cout << c[i];
    return 0;
}