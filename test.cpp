#include <iostream>
using namespace std;
// w数组存储的是3*3摆放后，可以放几个2*2
int w[] = {0, 5, 3, 1};
int main() {
    int a, b, c, d, e, f;
    while (cin >> a >> b >> c >> d >> e >> f) {
        if (a + b + c + d + e + f == 0) break;
        //因为 6*6 5*5 4*4 3*3 必须单独占用一层
        //但由于3*3在一层中可以最多摆放4个，所以 (c+3)/4
        int n = f + e + d + (c + 3) / 4;
        //再摆放完 6*6 5*5 4*4 3*3后，就需要摆放2*2
        // 2*2可以摆放在 4*4 和 3*3 的一层 5*e是4*4后摆放2*2
        // w[c%4]说明3*3还剩下多少空间可以摆放2*2
        int x = 5 * d + w[c % 4];
        //如果2*2把空隙全部摆完，剩下需要单独摆一层
        if (b > x) n += (b - x + 8) / 9;
        //最后摆1*1 这里使用减法 将所有已用空间都换算成1*1的
        int y = 36 * n - (36 * f + 25 * e + 16 * d + 9 * c + 4 * b);
        //如果1*1把空隙全部摆完，剩下需要单独摆一层
        if (a > y) n += (a - y + 35) / 36;
        cout << n << endl;
    }
    return 0;
}