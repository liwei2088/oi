#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int x;
    double s;
    cin >> x;
    if (x <= 50)
        s = x * 0.538;
    else if (x <= 200)
        s = 50 * 0.538 + (x - 50) * 0.568;
    else
        s = 50 * 0.538 + 150 * 0.568 + (x - 200) * 0.638;
    printf("%.2lf", s);
    return 0;
}