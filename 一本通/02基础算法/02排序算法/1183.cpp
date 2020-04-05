#include <algorithm>
#include <iostream>
using namespace std;
const int N = 105;
struct node {
    int id;
    string no;
    int age;
} a[N];
int n;

bool cmp(node x, node y) {
    if (x.age >= 60 && y.age >= 60 && x.age == y.age) return x.id < y.id;
    if (x.age >= 60 && y.age >= 60) return x.age > y.age;
    if (x.age >= 60 && y.age < 60) return true;
    if (x.age < 60 && y.age < 60) return x.id < y.id;
    return false;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].no >> a[i].age;
        a[i].id = i;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++) cout << a[i].no << endl;
    return 0;
}