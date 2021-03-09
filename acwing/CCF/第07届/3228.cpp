#include <cstring>
#include <iostream>
using namespace std;
const int N = 20;
int g[N][N], s[N][N];
int p[5][5];

bool draw(int x, int y) {
    memcpy(s, g, sizeof(s));  //备份g
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 4; j++)
            if (p[i][j]) {
                int a = x + i - 1, b = y + j - 1;
                s[a][b]++;
                if (s[a][b] == 2) return true;  //有重叠的情况
            }
    return false;
}

int main() {
    //输入15*10方格图
    for (int i = 1; i <= 15; i++)
        for (int j = 1; j <= 10; j++) cin >> g[i][j];
    //下边界
    for (int j = 1; j <= 10; j++) g[16][j] = 1;
    //输入4*4小方块
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 4; j++) cin >> p[i][j];
    int c;
    cin >> c;
    for (int i = 1;; i++) {
        if (draw(i, c)) {  //判断第i行第c列开始是否可以放下小方格
            draw(i - 1, c);  //将状态恢复到上一行
            break;
        }
    }
    for (int i = 1; i <= 15; i++) {
        for (int j = 1; j <= 10; j++) cout << s[i][j] << ' ';
        cout << endl;
    }
    return 0;
}