#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct node {
    string name;
    int no, score;
};
vector<node> a[30];
int n, m, k;

bool cmp(node x, node y) {
    if (x.score > y.score) return true;
    if (x.score == y.score && x.no < y.no) return true;
    return false;
}

int main() {
    string s;
    int x;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> s >> x;
        a[s[s.size() - 1] - 'a'].push_back({s, i, x});
    }
    for (int i = 0; i < 26; i++) sort(a[i].begin(), a[i].end(), cmp);
    while (m--) {
        cin >> s >> k;
        int t = s[s.size() - 1] - 'a';
        if (k > a[t].size())
            cout << "Orz YYR tql" << endl;
        else
            cout << a[t][k - 1].name << endl;
    }
    return 0;
}