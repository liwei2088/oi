#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define tmax(a, b) \
    if (b > a) a = b
#define tmin(a, b) \
    if (b < a) a = b
char inc() {
    char _[10];
    scanf("%s", _);
    return _[0];
}
int ini() {
    int _;
    scanf("%d", &_);
    return _;
}
long long inll() {
    long long _;
    scanf("%I64d", &_);
    return _;
}
double ind() {
    double _;
    scanf("%lf", &_);
    return _;
}
string ins() {
    string _;
    cin >> _;
    return _;
}
int inl(char _[]) {
    if (!fgets(_, (int)1e8, stdin)) return -1;
    int i = strlen(_);
    if (_[i - 1] == '\n') _[--i] = 0;
    return i;
}

typedef pair<int, int> pii;
typedef pair<char, char> pcc;
typedef long long LL;
const int inf = 0x3f3f3f3f;
const LL lnf = 0x3f3f3f3f3f3f3f3f;
const double pi = 3.14159265358979323846;
const double eps = 1e-8;
const int mod = 100007;
const int maxn = 1e3 + 10;
char mp[maxn][maxn];

void Draw(int n, int x, int y) {
    if (n == 1) {
        mp[x][y + 1] = mp[x][y + 2] = '_';
        mp[x][y] = mp[x - 1][y + 1] = '/';
        mp[x - 1][y + 2] = mp[x][y + 3] = '\\';
        return;
    }
    int w = 1 << n;
    int h = w >> 1;
    Draw(n - 1, x, y);
    Draw(n - 1, x, y + w);
    Draw(n - 1, x - h, y + w / 2);
}

int main() {
    int CAS = 0;
    int n = ini();
    Draw(n, (1 << n) - 1, 0);
    for (int i = 0, st = 1 << n; i < 1 << n; ++i, ++st) {
        for (int j = 0; j <= st; ++j) {
            printf("%c", mp[i][j] ? mp[i][j] : ' ');
        }
        puts("");
    }
    return 0;
}