#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int p, q;
    cin >> p >> q;
    if (p > q)
        cout << "WIN";
    else if (p < q)
        cout << "LOSE";
    else
        cout << "DRAW";
    return 0;
}