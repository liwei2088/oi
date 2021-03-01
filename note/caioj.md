## caioj刷题记录


### 递归题目

#### 全排列

视频地址：https://www.bilibili.com/video/BV1bE411d7Py?p=31

```c++
#include <cstdio>
#include <iostream>
using namespace std;
int n, a[10];
bool st[10];

void dfs(int u) {
    if (u == n + 1) {
        for (int i = 1; i <= n; i++) cout << a[i] << " ";
        cout << endl;
        return;
    }
    for (int i = 1; i <= n; i++)
        if (!st[i]) {
            st[i] = true;
            a[u] = i;
            dfs(u + 1);
            a[u] = 0;
            st[i] = false;
        }
}

int main() {
    cin >> n;
    dfs(1);
    return 0;
}
```

#### 组合

视频地址：https://www.bilibili.com/video/BV1bE411d7Py?p=32

```c++
#include <cstdio>
#include <iostream>
using namespace std;
int n, m, a[25];
bool st[25];

void dfs(int u) {
    if (u == m + 1) {
        for (int i = 1; i <= m; i++) cout << a[i] << " ";
        cout << endl;
        return;
    }
    for (int i = a[u - 1] + 1; i <= n; i++)
        if (!st[i]) {
            st[i] = true;
            a[u] = i;
            dfs(u + 1, u + 1);
            a[u] = 0;
            st[i] = false;
        }
}

int main() {
    cin >> n >> m;
    dfs(1);
    return 0;
}
```

#### 组合+素数判断

视频地址：https://www.bilibili.com/video/BV1bE411d7Py?p=33

```c++
#include <cstdio>
#include <iostream>
using namespace std;
int n, m, a[25], ans;
bool st[25];

bool ss(int x) {
    if (x <= 1) return false;
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0) return false;
    return true;
}

void dfs(int u, int c, int s) {
    if (c == m) {
        if (ss(s)) ans++;
        return;
    }
    if (u == n) return;
    dfs(u + 1, c + 1, s + a[u]);
    dfs(u + 1, c, s);
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    dfs(0, 0, 0);
    cout << ans;
    return 0;
}
```

#### 二叉树的后序遍历

视频地址：https://www.bilibili.com/video/BV1bE411d7Py?p=34

```c++
#include <cstdio>
#include <iostream>
using namespace std;
string s1, s2;

void dfs(int l, int r, int x, int y) {
    //在先根中选择一个 然后在中根中查找位置
    int root = s2.find(s1[l]);
    //[l,r]  [x,y] 中确定了 r 就是根的位置
    //例如 abdec dbeac  root = 3 下标从0开始
    // 开始遍历左子树  [bde] 和 [dbe]
    // 先根的范围就是[l+1,l+root-x] root-x就是子树中元素的个数
    // 后根的范围就是[x,root-1] root-1去掉根节点
    if (root > x) dfs(l + 1, l + root - x, x, root - 1);  //遍历左子树
    if (root < y) dfs(l + root - x + 1, r, root + 1, y);  //遍历右子树
    cout << s1[l];  //输出根 因为是后续遍历
}

int main() {
    cin >> s1 >> s2;
    dfs(0, s1.size() - 1, 0, s2.size() - 1);
    return 0;
}
```


### 数论题目

#### 快速幂

视频地址：https://www.bilibili.com/video/BV1bE411d7Py?p=115

```c++
#include <cstdio>
#include <iostream>
using namespace std;

int qmi(int a, int b, int p) {
    int res = 1;
    a = a % p;
    while (b) {
        if (b & 1) res = (res * 1ll * a) % p;
        a = (a * 1ll * a) % p;
        b >>= 1;
    }
    return res;
}

int main() {
    int a, b, p;
    cin >> a >> b >> p;
    cout << qmi(a, b, p);
    return 0;
}
```

### 扩展欧几里得算法

视频地址：https://www.bilibili.com/video/BV1bE411d7Py?p=116

```c++
#include <cstdio>
#include <iostream>
using namespace std;

//扩展欧几里得算法
int exgcd(int a, int b, int &x, int &y) {
    if (!b) {
        x = 1, y = 0;
        return a;
    }
    /*
    //公式推导后的代码实现
    int x1, y1;
    int r = exgcd(b, a % b, x1, y1);
    x = y1, y = x1 - a / b * y1;
    */
    //优化有的代码实现
    int r = exgcd(b, a % b, y, x);
    y -= a / b * x;
    return r;
}

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int x, y;
    int r = exgcd(a, b, x, y);
    if (k % r != 0) {
        puts("no solution!");
        return 0;
    }
    x = x * (k / r);
    y = (k - a * x) / b;
    cout << x << " " << y;
    return 0;
}
```

### 同余方程

视频地址：https://www.bilibili.com/video/BV1bE411d7Py?p=117

```c++
#include <cstdio>
#include <iostream>
using namespace std;

int exgcd(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1, y = 0;
        return a;
    }
    int r = exgcd(b, a % b, y, x);
    y -= a / b * x;
    return r;
}

int main() {
    int a, b, m;
    cin >> a >> b >> m;
    int x, y;
    int r = exgcd(a, m, x, y);
    if (b % r != 0) {
        puts("no solution!");
        return 0;
    }
    cout << (x * 1ll * b / r % m + m) % m;  //输出最小正整数解
    return 0;
}
```




