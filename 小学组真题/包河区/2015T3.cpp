/**
 * 为了使最后分解的数的乘积最大，
 * 首先我们应该确定 n 应该分解为几个数
 * (其实就是 n可以分出的最多个数)，
 * 确定过程就是从 2开始以步差为 1累加，
 * 直到恰好小于 n位置
 * (就是找最大数为k，使 2+3+…+k=t<n，划分成的个数应该为 k+1)；
 * 确定下来后，由于 n剩下来了一些，所以将这些平均的加到 k-2 上，
 * 由于不能平分，所以应该是先所有数加上(n-t)divk，
 * 然后较大的(n-t)modk个数多加一个 1。
 * 这样就确定下来了所有的数。最后将其相乘即可，
 * 注意结果必会超任何数据类型范围，所以要用高精度。
 */

#include <algorithm>
#include <iostream>
using namespace std;
int n, a[1005];

string mul(string a, int b) {
    string c;
    reverse(a.begin(), a.end());
    int t = 0;
    for (int i = 0; i < a.size(); i++) {
        t += (a[i] - '0') * b;
        c.push_back(t % 10 + '0');
        t /= 10;
    }
    while (t) c.push_back(t % 10 + '0'), t /= 10;
    reverse(c.begin(), c.end());
    return c;
}

int main() {
    int tot = 0;
    cin >> n;
    int i = 2;
    while (n - i >= 0) {
        a[++tot] = i;
        n -= i;
        i++;
    }
    i = tot;
    while (n != 0) {
        a[i]++;
        n--;
        i--;
    }
    string ans = "1";
    for (int i = 1; i <= tot; i++) ans = mul(ans, a[i]);
    cout << ans;
    return 0;
}