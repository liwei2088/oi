#include <iostream>
using namespace std;
bool q[2000005];
int main() {
    int n, t;
    double a;
    cin >> n;
    while (n--) {
        cin >> a >> t;
        for (int i = 1; i <= t; i++) q[int(i * a)] = !q[int(i * a)];
    }
    for (int i = 1; i <= 2000000; i++)
        if (q[i] == true) {
            cout << i;
            return 0;
        }
    return 0;
}