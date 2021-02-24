#include <cstdio>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
const int N = 30;
bool o1[N], o2[N];
string ans[N];

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (i + 1 < s.size() && s[i + 1] == ':')
            o2[s[i] - 'a'] = true, i++;
        else
            o1[s[i] - 'a'] = true;
    }
    int n;
    cin >> n;
    getchar();  //过滤n后的回车
    for (int k = 1; k <= n; k++) {
        printf("Case %d:", k);
        getline(cin, s);
        stringstream sstream(s);  //将字符串读入到stream
        vector<string> ops;       //命令选项数组
        string str;
        while (sstream >> str) ops.push_back(str);
        // ans存储命令选项的参数 如果是无参的保存一个空格 如果有参保存参数字符串
        for (int i = 0; i < 26; i++) ans[i].clear();
        //忽略第一个字符串 ops[0] 是命令工具名
        for (int i = 1; i < ops.size(); i++) {
            //如果命令选项不是以 - 开头 且不是字母 总长度超过2 都是非法的
            //直接退出
            if (ops[i][0] != '-' || ops[i][1] < 'a' || ops[i].size() != 2)
                break;
            int ch = ops[i][1] - 'a';  //获取命令选项名
            if (o1[ch])
                ans[ch] = ' ';                        //表示无参
            else if (o2[ch] && (i + 1) < ops.size())  //表示有参数
                ans[ch] = ops[i + 1], i++;
            else
                break;
        }
        //按字母顺序输出命令选项信息
        for (int i = 0; i < 26; i++)
            if (ans[i].size()) {
                cout << " -" << (char)(i + 'a');
                if (o2[i]) cout << ' ' << ans[i];
            }
        cout << endl;
    }
    return 0;
}