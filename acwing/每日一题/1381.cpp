#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n, t = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        t = t * i;                    //求阶乘
        while (t % 10 == 0) t /= 10;  //去除末尾的0
        t %= 10000000;                //保留有效的7位数字
    }
    cout << t % 10;
    return 0;
}