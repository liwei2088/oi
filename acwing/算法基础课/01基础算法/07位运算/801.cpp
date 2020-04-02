#include <iostream>
using namespace std;

int work(int x) {
    int res = 0;
    while (x) {
        if (x & 1) res++;
        x >>= 1;
    }
    return res;
}

int main() {
    int n, t;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        cout << work(t) << " ";
    }
    return 0;
}