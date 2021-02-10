#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

/*

001~abc-1, 999

abc
    1. num[i] < x, 0
    2. num[i] == x, 0~efg
    3. num[i] > x, 0~999

*/

//返回 从l~r位一共有多少个数字 相当于枚举 001 ~ abc-1
int get(vector<int> num, int l, int r) {
    int res = 0;
    for (int i = l; i >= r; i--) {
        res = res * 10 + num[i];
    }
    return res;
}

int power10(int x) {
    int res = 1;
    while (x--) res *= 10;
    return res;
}

int count(int n, int x) {
    if (!n) return 0;
    vector<int> num;
    while (n) {
        num.push_back(n % 10);
        n /= 10;
    }
    n = num.size();
    int res = 0;
    //从最高位开始枚举 -!x 去掉最高位为0的情况
    for (int i = n - 1 - !x; i >= 0; i--) {
        //如果不是最高位
        if (i < n - 1) {
            res += get(num, n - 1, i + 1) * power10(i);
            if (!x) res -= power10(i);  //当x位0时，要去掉0开头的所有数字
        }
        if (num[i] == x) {  //情况2中的第二种
            res += get(num, i - 1, 0) + 1;
        } else if (num[i] > x) {
            res += power10(i);
        }
    }
    return res;
}

int main() {
    int a, b;
    while (cin >> a >> b, a || b) {
        if (a > b) swap(a, b);
        for (int i = 0; i < 10; i++) {
            cout << count(b, i) - count(a - 1, i) << " ";
        }
        cout << endl;
    }
    return 0;
}