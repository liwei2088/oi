#include <algorithm>
#include <iostream>
using namespace std;
const int N = 25;
struct node {
    string name;
    int score;
} a[N];
int n;

bool cmp(node x, node y) {
    if (x.score == y.score) return x.name < y.name;
    return x.score > y.score;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].name >> a[i].score;
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) cout << a[i].name << " " << a[i].score << endl;
    return 0;
}