#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int x = max(a, b);
    int y = min(a, b);
    cout << x - y;
    return 0;
}