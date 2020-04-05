#include <algorithm>
#include <iostream>
using namespace std;
int a[11];

bool cmp(int x, int y) {
    if (x % 2 == 1 && y % 2 == 1) return x > y;
    if (x % 2 == 0 && y % 2 == 0) return x < y;
    if (x % 2 == 1 && y % 2 == 0) return true;
    return false;
}

int main() {
    for (int i = 1; i <= 10; i++) cin >> a[i];
    sort(a + 1, a + 11, cmp);
    for (int i = 1; i <= 10; i++) cout << a[i] << " ";
    return 0;
}