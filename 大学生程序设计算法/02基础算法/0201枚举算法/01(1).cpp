#include <iostream>
using namespace std;

/**
 * 水仙花数  枚举算法
 */
int main() {
    int a, b, c;
    for (int i = 100; i <= 999; i++) {
        int a = i % 10, b = i / 10 % 10, c = i / 100;
        if (i == a * a * a + b * b * b + c * c * c) 
            cout << i << endl;
    }
    return 0;
}