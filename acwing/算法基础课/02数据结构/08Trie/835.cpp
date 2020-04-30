#include <iostream>
using namespace std;
const int N = 100005;
// node表示trie树中的节点 其实26表示分支的数量 因为全是小写字母
// cnt表示单词出现的次数  idx 表示目前已经使用到的下标位置
// idx 下标 0 表示根节点  所以字符串中字符都是从1开始计数
int node[N][26], cnt[N], idx;
char str[N];

void insert(char s[]) {
    int p = 0;
    for (int i = 0; s[i]; i++) {
        int ch = s[i] - 'a';
        if (!node[p][ch]) node[p][ch] = ++idx;
        p = node[p][ch];
    }
    cnt[p]++;  //字符串出现次数+1
}

int query(char s[]) {
    int p = 0;
    for (int i = 0; s[i]; i++) {
        int ch = s[i] - 'a';
        if (!node[p][ch]) return 0;
        p = node[p][ch];
    }
    return cnt[p];
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        char op[2];
        cin >> op >> str;
        if (op[0] == 'I')
            insert(str);
        else
            cout << query(str) << endl;
    }
    return 0;
}