#include <cstring>
#include <iostream>
using namespace std;
const int N = 100003;
int h[N], e[N], ne[N], idx;

void insert(int x) {
    int k = (x % N + N) % N;
    e[idx] = x, ne[idx] = h[k], h[k] = idx++;  //拉链法
}

bool find(int x) {
    int k = (x % N + N) % N;
    for (int i = h[k]; i != -1; i = ne[i])
        if (e[i] == x) return true;
    return false;
}
/* 拉链法  */
int main() {
    int n;
    cin >> n;
    memset(h, -1, sizeof(h));
    while (n--) {
        char op[2];
        int x;
        cin >> op >> x;
        if (op[0] == 'I')
            insert(x);
        else {
            if (find(x))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}