#include <algorithm>
#include <iostream>
using namespace std;
int n;
struct node {
    int xh;
    string id;
    int age;
} a[105];

bool cmp(node x, node y) {
    if (x.age >= 60 && y.age < 60) return true;
    if (x.age >= 60 && y.age >= 60 && x.age > y.age) return true;
    if (x.age >= 60 && y.age >= 60 && x.age == y.age && x.xh < y.xh)
        return true;
    if (x.age < 60 && y.age < 60 && x.xh < y.xh) return true;
    return false;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].id >> a[i].age;
        a[i].xh = i;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) cout << a[i].id << endl;
    return 0;
}