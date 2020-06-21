#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int t1 = n * 5, t2 = 11 + n * 3;
    if (t1 > t2)
        cout << "Luogu";
    else if (t1 < t2)
        cout << "Local";
    return 0;
}