#include <iostream>
using namespace std;
int n;
struct node {
    string name;
    int age, score;
} a[100000];

void work(node t[]) {
    for (int i = 1; i <= n; i++) {
        t[i].score += t[i].score / 5;
        if (t[i].score > 600) t[i].score = 600;
        t[i].age++;
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i].name >> a[i].age >> a[i].score;
    work(a);
    for (int i = 1; i <= n; i++)
        cout << a[i].name << " " << a[i].age << " " << a[i].score << endl;
    return 0;
}