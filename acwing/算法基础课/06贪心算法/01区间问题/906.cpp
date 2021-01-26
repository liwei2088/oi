#include <algorithm>
#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;
struct node {
    int begin, end;
} a[100005];
int n;
priority_queue<int, vector<int>, greater<int> > q;  //小顶堆

bool cmp(node x, node y) { return x.begin < y.begin; }  //按照起点从小到大排序

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].begin >> a[i].end;
    sort(a + 1, a + n + 1, cmp);
    int ans = 0;
    q.push(a[1].end);
    for (int i = 2; i <= n; i++) {
        if (q.top() >=
            a[i].begin) {  //如果比堆顶的值还小，则说明与堆中任何一个区间都相交
            q.push(a[i].end);  //插入堆中，生成一个新的区间
        } else {
            q.pop();  //否则 更新堆顶元素 即出堆后放入新的区间结尾
            q.push(a[i].end);
        }
    }
    cout << q.size();
    return 0;
}