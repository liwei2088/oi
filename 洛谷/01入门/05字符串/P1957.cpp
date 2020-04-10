#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
char s[50];

void work(char op, int x, int y) {
    if (op == 'a') {
        sprintf(s, "%d+%d=%d", x, y, x + y);
        printf("%s\n%d\n", s, strlen(s));
    } else if (op == 'b') {
        sprintf(s, "%d-%d=%d", x, y, x - y);
        printf("%s\n%d\n", s, strlen(s));
    } else if (op == 'c') {
        sprintf(s, "%d*%d=%d", x, y, x * y);
        printf("%s\n%d\n", s, strlen(s));
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char op[6], ch;
        int x, y;
        scanf("%s", op);
        if (op[0] == 'a') {
            ch = op[0];
            cin >> x >> y;
            work(op[0], x, y);
        } else if (op[0] == 'b') {
            ch = op[0];
            cin >> x >> y;
            work(op[0], x, y);
        } else if (op[0] == 'c') {
            ch = op[0];
            cin >> x >> y;
            work(op[0], x, y);
        } else {
            x = atoi(op);
            scanf("%d", &y);
            work(ch, x, y);
        }
    }
    return 0;
}