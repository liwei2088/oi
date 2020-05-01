#include <cstring>
#include <iostream>
using namespace std;
string a, b;
int main() {
    cin >> a >> b;
    int ra = 1, rb = 1;
    int n = a.size(), m = b.size();
    for (int i = 0; i < n; i++) ra = ra * (a[i] - 'A' + 1) % 47;
    for (int i = 0; i < m; i++) rb = rb * (b[i] - 'A' + 1) % 47;
    if (ra == rb)
        cout << "GO" << endl << "r1=r2=" << ra;
    else
        cout << "STAY" << endl << "r1=" << ra << endl << "r2=" << rb;
    return 0;
}