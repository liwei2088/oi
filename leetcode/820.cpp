#include <cstring>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int minimumLengthEncoding(vector<string>& words) {
    //将所有的字符串放置到哈希表中
    set<string> st(words.begin(), words.end());
    int n = words.size();
    //遍历所有字符串查找是否存在某一子串结尾的字符串，如果有则删除
    for (int i = 0; i < n; i++)
        //注意循环从1开始，因为不能把本串删除
        for (int j = 1; j < words[i].size(); j++) 
            //删除子串
            st.erase(words[i].substr(j));
    int ans = 0;
    //遍历哈希表中存在的子串累加长度 注意由于要增加一个#号，所以长度+1
    for (set<string>::iterator it = st.begin(); it != st.end(); it++)
        ans += (*it).size() + 1;
    return ans;
}

int main() {
    string s;
    vector<string> v;
    while (cin >> s) v.push_back(s);
    cout << minimumLengthEncoding(v);
    return 0;
}