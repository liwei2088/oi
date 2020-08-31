#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    for (int a = 0; a <= n; a++)
        for (int b = 0; b <= n; b++)
            for (int c = 0; c <= n; c++)
                if ((a + b) % 2 == 0 && (b + c) % 3 == 0 &&
                    (a + b + c) % 5 == 0)
                    ans = max(ans, a + b + c);
    cout << ans;
    return 0;
}