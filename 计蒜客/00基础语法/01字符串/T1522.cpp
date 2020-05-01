#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char ch;
int main() {
    int ans = 0, n = 0;
    while (cin >> ch) {
        if (ch >= 'A' && ch <= 'F' && ch != 'E') {
            int x = 4 - (ch - 'A');
            ans += x < 0 ? 0 : x;
            n++;
            continue;
        }
        cout << "Unknown";
        return 0;
    }
    printf("%.2lf", ans * 1.0 / n);
    return 0;
}