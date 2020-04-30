#include <iostream>
using namespace std;
const int N = 1E5 + 5, M = 1E6 + 5;
int n, m;
char p[N], s[M];
int ne[N];
int main() {
    cin >> n >> p + 1 >> m >> s + 1;
    //求 next 数组 一定要注意i=2开始 因为i=1表示就一个字符
    // next[1]=0 否则匹配过程无法退出循环
    for (int i = 2, j = 0; i <= n; i++) {
        while (j && p[i] != p[j + 1]) j = ne[j];
        if (p[i] == p[j + 1]) j++;
        ne[i] = j;
    }
    for (int i = 1, j = 0; i <= m; i++) {
        while (j && s[i] != p[j + 1]) j = ne[j];
        if (s[i] == p[j + 1]) j++;
        if (j == n) {  //匹配成功
            printf("%d ", i - n);
            j = ne[j];  //匹配成功后，继续匹配需要后移的位置
        }
    }
    return 0;
}