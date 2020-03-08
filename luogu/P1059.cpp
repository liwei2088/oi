#include <algorithm>
#include <iostream>
using namespace std;

int n, a[110];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n - 1; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[i] == a[j]) {
                swap(a[j], a[n]);
                j--;
                n--;
            }
        }
    }
    sort(a + 1, a + n + 1);
    cout<<n<<endl;
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    system("pause");
    return 0;
}