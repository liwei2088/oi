#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int W, H, a;
    cin >> W >> H >> a;
    int x = ceil(W * 1.0 / a);
    int y = ceil(H * 1.0 / a);
    cout << x * y;
    return 0;
}