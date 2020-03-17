#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

char g[6][6], t[6][6];
int dr[5][2] = {{0, 0}, {1, 0}, {-1, 0}, {0, 1}, {0, -1}};
void trun(int x, int y) {
    for (int i = 0; i < 5; i++) {
        int dx = x + dr[i][0];
        int dy = y + dr[i][1];
        if (dx >= 0 && dx < 5 && dy >= 0 && dy < 5)
            g[dx][dy] ^= 1;  //将0变成1 将1变成0
    }
}

int work() {
    int ans = 1e9;
    //使用二进制压缩 保存灯的开关状态， 0表示没有按下 1表示按下
    //每一行其实只有 0 ~ 1<<5-1 一共32种开关方式
    for (int i = 0; i < 1 << 5; i++) {
        memcpy(t, g, sizeof(g));
        int res = 0;
        //枚举第一行的所有可能开关操作后的结果
        for (int j = 0; j < 5; j++)
            //判断第 j 位是否是 1 也就是按下状态
            //执行按下操作 注意是第一行（0行）
            if (i >> j & 1) {
                res++;
                trun(0, j);
            }
        //处理第1行开始到第4行
        //因为最后一行下面没有行了，所以无法操作
        //我们是通过下一行操作来控制上一行的状态

        for (int i = 0; i < 4; i++)
            //遍历一行中每一个状态，如果是0则需要下一行
            //同一位置按下
            for (int j = 0; j < 5; j++)
                if (g[i][j]=='0') {
                    res++;
                    trun(i + 1, j);
                }
        //判断最后一行是否都是亮 也就是都是1
        bool flag = true;
        for (int i = 0; i < 5; i++)
            if (g[4][i] == '0') {
                flag = false;
                break;
            }
        if (flag) ans = min(ans, res);
        memcpy(g, t, sizeof(g));
    }
    if (ans > 6) return -1;
    return ans;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        for (int i = 0; i < 5; i++) cin >> g[i];
        cout << work() << endl;
    }
    return 0;
}