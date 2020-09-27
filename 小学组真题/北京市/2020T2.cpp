#include <iostream>
using namespace std;
int a[10];
int main() 
    int f, n;
    cin >> f >> n;
    int x = f * 100 + 1;
    int y = f * 100 + n;
    for (int i = x; i <= y; i++) {
        int t = i;
        while (t) {
            a[t % 10]++;
            t /= 10;
        }
    }
    for (int i = 0; i <= 9; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}