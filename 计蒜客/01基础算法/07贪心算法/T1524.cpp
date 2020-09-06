#include <iostream>
using namespace std;
double n;
int main() {
    cin >> n;
    double mx = 0;
    for (int i = 1; i <= 12; i++) {
        double x;
        cin >> x;
        mx = max(mx, x);
    }
    printf("%.2lf", mx * n);
    return 0;
}