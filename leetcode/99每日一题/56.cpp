#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > merge(vector<vector<int> >& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int> > g;
    for (int i = 0; i < intervals.size(); i++) {
        int l = intervals[i][0], r = intervals[i][1];
        if (!g.size() || g.back()[1] < l)
            g.push_back({l,r});
        else
            g.back()[1] = max(g.back()[1], r);
    }
    return g;
}

int main() {
    vector<vector<int> > g;
    int x, y;
    while (cin >> x >> y) {
        vector<int> t;
        t.push_back(x);
        t.push_back(y);
        g.push_back(t);
    }
    g = merge(g);
    for (int i = 0; i < g.size(); i++)
        cout << g[i][0] << " " << g[i][1] << endl;
    return 0;
}