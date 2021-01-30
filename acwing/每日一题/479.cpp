#include<cstdio>
#include <iostream>
    using namespace std;
// 区间 DP
int n, w[35], g[35][35], f[35][35];

void print(int l, int r) {
    if (l > r) return;
    int root = g[l][r];
    cout << root << " ";
    print(l, root - 1);
    print(root + 1, r);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> w[i];
    for (int len = 1; len <= n; len++)
        for (int l = 1; l + len - 1 <= n; l++) {
            int r = l + len - 1;
            if (len == 1) {  //如果区间长度是 1
                f[l][r] = w[l];  //该点的没有左右子树 加分就是节点本身
                g[l][r] = l;  //该节点也是当前子树的根
            } else {
                for (int k = l; k <= r; k++) {  //枚举根节点k的位置
                    //如果没有左子树 则标记得分为 1 否则为 f[l][k-1]
                    int left = k == l ? 1 : f[l][k - 1];
                    //如果没有右子树 则标记得分为 1 否则为 f[k+1][r]
                    int right = k == r ? 1 : f[k + 1][r];
                    //计算得分
                    int score = left * right + w[k];
                    //由于没有=号 取得的最优解一定是字典序最小
                    if (f[l][r] < score) {
                        f[l][r] = score;  //更新得分
                        g[l][r] = k;      //更新根节点
                    }
                }
            }
        }
    cout << f[1][n] << endl;
    //print(1, n);
    return 0;
}