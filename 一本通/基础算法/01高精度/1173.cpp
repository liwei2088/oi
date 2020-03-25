#include <iostream>
#include <vector>
using namespace std;
vector<int> s, t;

void mul(vector<int>& v, int k) {
    int t = 0;
    for (int i = 0; i < v.size(); i++) {
        t += v[i] * k;
        v[i] = t % 10;
        t /= 10;
    }
    while (t) v.push_back(t % 10), t /= 10;
}
void add(vector<int>& a, vector<int>& b) {
    int t = 0;
    int la = a.size(), lb = b.size();
    for (int i = 0; i < la || i < lb; i++) {
        if (i < la) t += a[i];
        if (i < lb) t += b[i];
        //这里在模板上修改一下 因为a的长度可能小于b vector需要单独处理
        //其实如果是数组就没有这么麻烦
        if (i < la)
            a[i] = t % 10;
        else
            a.push_back(t % 10);
        t /= 10;
    }
    if (t) a.push_back(t);
}

int main() {
    int n;
    cin >> n;
    s.push_back(1);
    t.push_back(1);
    for (int i = 2; i <= n; i++) {
        mul(t, i);
        add(s, t);
    }
    for (int i = s.size() - 1; i >= 0; i--) cout << s[i];
    return 0;
}