#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void mult(vector<int>& a, vector<int> b) {
    vector<int> c;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int la = a.size(), lb = b.size();
    for (int i = 0; i < lb; i++) {
        c[i] = c[i]
    }
}

void qmi(int b, vector<int>& c) {
    vector<int> a = vector<int>(2);
    while (b) {
        if (b & 1) mult(c, a);
        mult(a, a);
        b >>= 1;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> res;
    qmi(n, res);
    for (int i = 0; i < res.size(); i++) cout << res[i];
    return 0;
}