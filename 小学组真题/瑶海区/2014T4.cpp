#include <algorithm>
#include <iostream>
using namespace std;
int n;

int work(int k) {
    if (k == 1) return 1;
    return work(k / 2) + 1;
}

int main() {
    int n;
    cin >> n;
    cout << work(n);
    return 0;
}