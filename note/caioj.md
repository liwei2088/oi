## caioj刷题记录


### 递归题目

#### 全排列

视频地址：https://www.bilibili.com/video/BV1bE411d7Py?p=35

```c++

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




