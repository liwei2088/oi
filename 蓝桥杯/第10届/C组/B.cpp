#include <iostream>
using namespace std;
/**
 * 试题 B: 矩形切割
 * 小明有一些矩形的材料，他要从这些矩形材料中切割出一些正方形。
 * 当他面对一块矩形材料时，他总是从中间切割一刀，切出一块最大的正方
 * 形，剩下一块矩形，然后再切割剩下的矩形材料，直到全部切为正方形为止。
 * 例如，对于一块两边分别为 5 和 3 的材料（记为 5 ×3），小明会依次切出
 * 3 ×3、2 ×2、1 ×1、1 ×1 共 4 个正方形。
 * 现在小明有一块矩形的材料，两边长分别是 2019 和 324。请问小明最终会
 * 切出多少个正方形？
 */

int main() {
    int n, m, ans = 1;
    cin >> n >> m;
    while (n != m) {
        if (n < m) swap(n, m);
        n -= m;
        ans++;
    }
    cout << ans;
    return 0;
}