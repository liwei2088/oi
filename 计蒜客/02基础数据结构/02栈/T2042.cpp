#include <cstring>
#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
struct node {
    char var;
    int time;
} q[1010];
bool vis[30];

int getFn(string s) {
    if (s == "O(1)") return 0;
    int res = 0;
    for (int i = 0; s[i]; i++)
        if (s[i] >= '0' && s[i] <= '9') res = res * 10 + s[i] - '0';
    return res;
}

int getTime(char x[], char y[]) {
    //如果循环其实从n开始
    if (x[0] == 'n') {
        if (y[0] == 'n') return 0;
        return -1;
    }
    //如果循环终止是 n
    if (y[0] == 'n') return 1;
    //如果都是数字
    int d = atoi(y) - atoi(x);
    if (d < 0) return -1;
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int L;
        string fn;
        cin >> L >> fn;
        memset(vis, 0, sizeof(vis));
        int bigO = getFn(fn);
        bool err = false;
        int tt = 0, mx = 0;  //保存栈顶位置
        for (int i = 1; i <= L; i++) {
            char F, I, X[5], Y[5];
            cin >> F;
            if (F == 'F') {
                cin >> I >> X >> Y;
                if (err == true) continue;
                //循环变量如果已经使用过 则返回错误
                if (vis[I - 'a']) {
                    err = true;
                    continue;
                }
                vis[I - 'a'] = true;
                int time = getTime(X, Y);
                //如果栈不为空且栈顶元素不为-1 则增加时间复杂度
                if (time >= 0 && q[tt].time >= 0)
                    time += q[tt].time;
                else
                    time = -1;
                tt++;
                q[tt].var = I;
                q[tt].time = time;
                mx = max(mx, time);  //求最大时间复杂度
            } else {
                if (err == true) continue;
                if (tt) {
                    vis[q[tt].var - 'a'] = false;
                    tt--;
                    continue;
                }
                err = true;
            }
        }
        if (tt) err = true;
        if (err)
            puts("ERR");
        else if (mx == bigO)
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}