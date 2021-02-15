#include <iostream>
using namespace std;

/**
 * 试题 A: 求和
 * 小明对数位中含有 2、0、1、 9 的数字很感兴趣，在 1 到 40 中这样的数包
 * 括 1、2、9、10 至 32、39 和 40，共 28 个，他们的和是 574。
 * 请问，在 1 到 2019 中，所有这样的数的和是多少？
 */

int main() {
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        int t = i;
        while (t) {
            if (t % 10 == 2 || t % 10 == 0 || t % 10 == 1 || t % 10 == 9) {
                ans += i;
                break;
            }
            t /= 10;
        }
    }
    cout << ans;
    return 0;
}