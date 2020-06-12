#include <iostream>
using namespace std;
typedef unsigned long long ULL;
const int N = 100010, P = 131;
int n, m;
char str[N];
//h数组存储前缀和哈希值 p(小写)数组存储 P(大写)进制每一个的权值
ULL h[N], p[N];
//使用前缀和 求[l,r]范围内的字符串哈希值
ULL get(int l, int r) { return h[r] - h[l - 1] * p[r - l + 1]; }

int main() {
    cin >> n >> m >> str + 1;
    p[0] = 1;
    for (int i = 1; i <= n; i++) {
        p[i] = p[i - 1] * P;  //计算权值
        // 注意 因为 2^64 不需取余
        h[i] = h[i - 1] * P + str[i];  //计算前缀和
    }
    while (m--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if (get(l1, r1) == get(l2, r2))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}