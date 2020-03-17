#include <cstring>
#include <iostream>
using namespace std;
int f[20], d[20];
int main() {
    //首先初始化 汉诺三塔的问题
    //三塔问题（A->C）其实就是先将n-1个移动到B柱，
    //再将最下面的移动到C柱，然后再将n-1个移动到C柱
    // d[i-1]*2的原因就是要移动2次
    for (int i = 1; i <= 12; i++) d[i] = 2 * d[i - 1] + 1;
    memset(f, 0x3f, sizeof(f));
    f[0] = 0;
    //四柱的问题 其实可以把先移动的n-1个盘子分成两个部分处理
    // f[j]其实是先处理n-1个盘子中的一部分，也是一个四柱问题
    //但剩下的 i-j 个盘子就成了3柱问题 所以使用预先处理的d[i-j]
    for (int i = 1; i <= 12; i++)
        for (int j = 0; j < i; j++) f[i] = min(f[i], 2 * f[j] + d[i - j]);
    //输出所有的情况
    for (int i = 1; i <= 12; i++) cout << f[i] << endl;
    return 0;
}