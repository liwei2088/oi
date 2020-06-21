#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
string n;
int k, Q;
vector<int> add(int x) {
    vector<int> A, B, C;
    int lena = n.size();
    for (int i = 0; i < lena; i++) A.push_back(n[i] - '0');
    while (x != 0) {
        B.push_back(x % k);
        x /= k;
    }
    int t = 0;
    for (int i = 0; i < A.size() || i < B.size(); i++) {
        if (i < A.size()) t += A[i];
        if (i < B.size()) t += B[i];
        C.push_back(t % k);
        t = t / k;
    }
    if (t != 0) C.push_back(t);
    return C;
}

int main() {
    cin >> n;
    cin >> k >> Q;
    while (Q--) {
        int x;
        cin >> x;
        vector<int> ans = add(x);
        for (int i = 0; i < ans.size(); i++) cout << ans[i];
        cout << endl;
    }
    return 0;
}