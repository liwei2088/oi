#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;
int n;
stack<int> sk;
int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("0");
        return 0;
    }
    while (n) {
        if (n % 3 == 2)
            sk.push(-1), n = n / 3 + 1;
        else if (n % 3 == -2)
            sk.push(1), n = n / 3 - 1;
        else
            sk.push(n % 3), n /= 3;
    }
    while (sk.size()) {
        if (sk.top() == -1)
            printf("z");
        else
            printf("%d", sk.top());
        sk.pop();
    }
    return 0;
}