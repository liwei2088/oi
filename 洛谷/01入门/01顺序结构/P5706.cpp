#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    double t;
    int n;
    cin >> t >> n;
    printf("%.3lf\n%d", t / n, 2 * n);
    return 0;
}