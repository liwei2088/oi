/**
 *  https://iai.sh.cn/problem/79
 *
 *  盈亏问题
 */

#include <iostream>
using namespace std;

int main() {
    int a, x, y;
    cin >> a >> x >> y;
    cout << x + y << " " << a * (x + y) - x;
    return 0;
}