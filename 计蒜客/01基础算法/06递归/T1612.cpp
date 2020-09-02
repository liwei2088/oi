#include <iostream>
using namespace std;

void dfs() {
    int x;
    cin >> x;
    if (x == 0) return;
    dfs();
    cout << x << " ";
}

int main() {
    dfs();
    return 0;
}