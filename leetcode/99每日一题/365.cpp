#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a < b) swap(a, b);
    if (b == 0) return a;
    return gcd(b, a % b);
}

/*
    题目：365水壶问题
    思路：利用裴蜀定理解决 求ax+by=z  要求：x+y>=z
*/
bool canMeasureWater(int x, int y, int z) {
    if (x + y < z) return false;
    //因为后面需要求最大公约数 确保x,y不能为 0
    if (x == 0 || y == 0) return z == 0 || x + y == z;
    return z % gcd(x, y) == 0;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    bool f = canMeasureWater(x, y, z);
    if (f)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}