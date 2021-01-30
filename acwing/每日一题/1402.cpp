#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
typedef pair<int, int> PII;
const int N = 105;
const double eps = 1e-6;
int dr[][2] = {{1, 0}, {-1, 0}, {0, 1},  {0, -1},
               {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
int n, m;
char g[N][N];
vector<PII> v;     //记录搜索的联通块中点的坐标
vector<double> h;  //保存联通图形对应的hash字母 0->'a' 1->'b'

void dfs(int x, int y) {
    g[x][y] = '0';
    v.push_back(make_pair(x, y));  //将连通块中的坐标保存到v中，方便后面hash
    for (int i = 0; i < 8; i++) {
        int xx = x + dr[i][0];
        int yy = y + dr[i][1];
        if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && g[xx][yy] == '1') {
            dfs(xx, yy);
        }
    }
}

double get_dis() {
    double res = 0;
    //通过双重循环获取两个点
    for (int i = 0; i < v.size(); i++)
        for (int j = i + 1; j < v.size(); j++) {
            //计算两点之间的距离
            int x1 = v[i].first, x2 = v[j].first;
            int y1 = v[i].second, y2 = v[j].second;
            res += sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        }
    return res;
}

char get_hash(double d) {
    for (int i = 0; i < h.size(); i++) {
        if (fabs(h[i] - d) < eps) {  //浮点数比较
            return i + 'a';
        }
    }
    h.push_back(d);  //将新的联通图形距离存入数组
    return 'a' + h.size() - 1;  //产生新的字母 即(总数-1)， 因为下标从0开始
}

void fill(char c) {
    for (int i = 0; i < v.size(); i++) {
        int x = v[i].first;
        int y = v[i].second;
        g[x][y] = c;
    }
}

int main() {
    // 0.读入数据
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) cin >> g[i][j];
    // 1.DFS搜索
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (g[i][j] == '1') {  //如果找到'1'开始搜索
                dfs(i, j);         //深度优先搜索
                double d = get_dis();  //计算连通块中的所有点之间的距离
                char c = get_hash(d);  //根据距离计算hash 将每个形状对应一个字母
                fill(c);    //将c字母填充该联通图形
                v.clear();  //清空v数组
            }
    // 2.输出图形
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cout << g[i][j];
        cout << endl;
    }
    return 0;
}