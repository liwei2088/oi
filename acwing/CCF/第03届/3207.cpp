#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1005;
int n, s[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        s[x]++;
        cout << s[x] << " ";
    }
    return 0;
}