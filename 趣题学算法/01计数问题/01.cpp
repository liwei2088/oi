#include <iostream>
using namespace std;
/*
    时间复杂度 O(sqrt(n))
*/
int main() {
    int n;
    while (cin >> n && n) {
        int coins = 0, day = 0, k = 1;
        while (day + k <= n) {  //如果可以连续发放k天k个金币
            coins += k * k;     //则直接发放k*k
            day += k;           //天数增加k天
            k++;                //准备下一次的金币k+1
        }
        coins += (n - day) * k;  //多余且不够k天的单独处理
        cout << coins << endl;
    }
    return 0;
}