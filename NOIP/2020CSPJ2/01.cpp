#include <cstdio>
#include <iostream>
using namespace std;

/**
 * 将 n 转换为 2 进制，其中为 1 的位置输出即可
 */

int main() {
    int n;
    cin >> n;
    if (n % 2 == 1) {   //奇数一定不是优秀拆分
        puts("-1");
        return 0;
    }
    for (int i = 32; i >= 1; i--) {  // n<=10^7  2^k k的最大值是32
        if (n >> i & 1) {  //判断当前位置是否是 1
            printf("%d ", 1 << i);  //输出 2^i
        }
    }
    return 0;
}