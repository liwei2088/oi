#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    long long a, b, n, s;
    cin >> a >> b >> n >> s;
    if (b >= s - min(s / n, a) * n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}