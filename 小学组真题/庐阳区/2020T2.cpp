#include <iostream>
using namespace std;
int n, a[100005];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int mi = a[1];
    for (int i = 2; i <= n; i++) mi = min(mi, a[i]);
    for (int i = 1; i <= n; i++)
        if (a[i] == mi) 
            cout << i << " ";
    return 0;
}