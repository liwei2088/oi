#include <iostream>
using namespace std;
long long q[1000005];

/*
    注意：集合中没有重复元素
    思路：定义两个头指针，主要是为了实现有序输出
    虽然会生成大量重复数据 但是可以通过程序过滤掉
 */

int main() {
    int a, n;
    while (cin >> a >> n) {
        int f1 = 1, f2 = 1, r = 0;
        q[++r] = a;
        while (r != n) {
            long long x = q[f1] * 2 + 1, y = q[f2] * 3 + 1;
            long long t = min(x, y);
            if (x <= y)
                f1++;
            else
                f2++;
            if (q[r] == t) continue;
            q[++r] = t;
        }
        cout << q[n] << endl;
    }
    return 0;
}