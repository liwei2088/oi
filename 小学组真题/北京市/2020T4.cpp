#include <iostream>
using namespace std;
int main() {
    int a, b, t;
    int x = 0, y = 0;
    cin >> a >> b >> t;
    while (x < t && y < t) {
        if (x <= y) x += a;
        y += b;
        cout << x << " " << y << endl;
    }
    if (x > y)
        cout << "tuzi" << endl;
    else if (x < y)
        cout << "wugui" << endl;
    else
        cout << "tongshi" << endl;
    return 0;
}