#include <iostream>
using namespace std;

/**
 * 桶排序 统计人数
 */

int n, w, a[100005], b[605];
int main() {
    cin >> n >> w;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        b[x]++;
        int m = max(1, i * w / 100);
        for (int j = 600; j >= 0; j--) {
            m -= b[j];
            if (m <= 0) {
                printf("%d ", j);
                break;
            }
        }
    }
    return 0;
}