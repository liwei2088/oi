#include <iostream>
using namespace std;
int n, a[10], b[10], c[10];
int main() {
    cin >> n;
    for (int i = 1; i <= 7; i++) cin >> a[i];
    while (n--) {
        for (int i = 1; i <= 7; i++) cin >> b[i];
        int cnt = 0;
        for (int i = 1; i <= 7; i++)
            for (int j = 1; j <= 7; j++)
                if (a[i] == b[j]) cnt++;
        c[cnt]++;
    }
    for (int i = 7; i >= 1; i--) cout << c[i] << " ";
    return 0;
}