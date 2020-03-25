#include <iostream>
using namespace std;
int x, y, z;
long long f[55];
int main() {
    cin >> x >> y >> z;
    //第一个月只有一对成虫 f[1]=1
    //卵长成成虫后的第一个月不产卵(过x个月产卵) 其实就是 x+1 个月开始产卵
    //从1月到第x+1月都是1只成虫
    for (int i = 1; i <= x + 1; i++) f[i] = 1;
    for (int i = x + 2; i <= z + 1; i++) {  //问z个月之后 所以最终计算的值是z+1
        f[i] = f[i - 1] + f[i - x - 2] * y;  //每对卵要过 2 个月长成成虫
    }
    cout << f[z + 1];
    return 0;
}