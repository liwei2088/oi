#include <iostream>
using namespace std;
const int N = 100005;
int stk[N], tt, n;
int main() {
    int x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        //将大于等于x的数据出栈，因为他们对于结果没有任何作用
        while (tt && stk[tt] >= x) tt--;
        if (tt)
            cout << stk[tt] << " ";
        else
            cout << "-1 ";
        stk[++tt] = x;
    }
    return 0;
}