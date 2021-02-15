#include <iostream>
using namespace std;

/**
 * 试题 C: 年号字串
 * 小明用字母 A 对应数字 1， B 对应 2，以此类推，用 Z 对应 26。对于 27
 * 以上的数字，小明用两位或更长位的字符串来对应，例如 AA 对应 27， AB 对
 * 应 28， AZ 对应 52，LQ 对应 329。
 * 请问 2019 对应的字符串是什么？
 */


char a[100];
int tt;
int main() {
    int n;
    cin >> n;
    while (n != 0) {
        a[++tt] = n % 26 + 'A' - 1;
        n /= 26;
    }
    for (int i = tt; i >= 1; i--) cout << a[i];
    return 0;
}