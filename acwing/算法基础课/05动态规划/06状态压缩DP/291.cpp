#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 12, M = 1 << N;
int n, m, st[M];
long long f[N][M];
int main() {
    while (cin >> n >> m && (n || m)) {  //输入n,m 当n==0 && m==0 停止
        //预处理 st 数组,保存可行的列方案
        //因为有n行 所以列方案应该是 0~2^(n-1)
        for (int i = 0; i < 1 << n; i++) {
            //记录连续0的个数 如果是奇数方案不可行 偶数可行 因为1*2要竖着摆放
            int cnt = 0;
            st[i] = true;  //假设是可行的
            for (int j = 0; j < n; j++) {
                if (i >> j & 1) {  //当遇到1的时候 查看前面的0是否是偶数
                    if (cnt & 1) {      //如果是奇数
                        st[i] = false;  //方案不可行
                        break;
                    }
                    cnt = 0;  //如果是偶数 则清零 继续统计下面的0的个数
                } else
                    cnt++;
            }
            if (st[i] && cnt & 1) st[i] = false;
        }
        memset(f, 0, sizeof(f));
        f[0][0] = 1;                  //初值
        for (int i = 1; i <= m; i++)  //枚举列 1~m  注意要多算一行
            for (int j = 0; j < 1 << n; j++)  //枚举列的状态
                for (int k = 0; k < 1 << n; k++)
                    // j&k==0表示横着放的积木不能重叠
                    // st[j|k]表示从 k -> j 状态转移是否可行
                    if ((j & k) == 0 && (st[j | k])) {
                        f[i][j] += f[i - 1][k];
                    }
        printf("%lld\n", f[m][0]);
    }
    return 0;
}