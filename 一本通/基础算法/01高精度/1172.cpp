#include <iostream>
#include <vector>
using namespace std;
vector<int> a;

void mul(vector<int>& v, int k) {
    int t = 0;
    for (int i = 0; i < v.size(); i++) {
        t += v[i] * k;
        v[i] = t % 10;
        t /= 10;
    }
    while (t) v.push_back(t % 10), t /= 10;
}

int main() {
    int n;
    cin >> n;
    a.push_back(1);
    for (int i = 2; i <= n; i++) mul(a, i);
    for (int i = a.size() - 1; i >= 0; i--) cout << a[i];
    return 0;
}