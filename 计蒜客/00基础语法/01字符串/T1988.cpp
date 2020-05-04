#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
const int N = 1005;
int n, m;
struct node {
    string name;
    int num, time;
} a[N];

bool cmp(node x, node y) {
    if (x.num > y.num) return true;
    if (x.num == y.num && x.time < y.time) return true;
    if (x.num == y.num && x.time == y.time && x.name < y.name) return true;
    return false;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        string name;
        cin >> name;
        int num = 0, time = 0;
        for (int j = 1; j <= n; j++) {
            string t;
            cin >> t;
            if (t[0] == '-' || t[0] == '0') continue;
            int pl = t.find('(');
            if (pl == -1)
                time += atoi(t.c_str()), num++;
            else {
                num++;
                int pr = t.find(')');
                time += atoi(t.substr(0, pl).c_str()) +
                        atoi(t.substr(pl + 1).c_str()) * 20;
            }
        }
        a[i].name = name;
        a[i].num = num;
        a[i].time = time;
    }
    sort(a + 1, a + m + 1, cmp);
    for (int i = 1; i <= m; i++)
        cout << a[i].name << " " << a[i].num << " " << a[i].time << endl;
    return 0;
}