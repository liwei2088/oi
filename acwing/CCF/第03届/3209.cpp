#include <cstdio>
#include <iostream>
using namespace std;
const int N = 5005;
struct node {
    int type;
    double price;
    long long num;
} a[N];
int n;
int main() {
    string s;
    double p;
    long long c;
    while (cin >> s) {
        ++n;
        if (s == "buy") {
            cin >> p >> c;
            a[n] = {1, p, c};
        } else if (s == "sell") {
            cin >> p >> c;
            a[n] = {0, p, c};
        } else {
            cin >> c;
            a[c].num = 0;
        }
    }
    long long ans = 0;
    double price;
    for (int i = 1; i <= n; i++) {
        if (a[i].num == 0) continue;
        double p0 = a[i].price;
        long long sum1 = 0, sum2 = 0;  //一定要定义为 long long
        for (int j = 1; j <= n; j++) {
            if (a[j].num == 0) continue;
            if (a[j].type == 1 && a[j].price >= p0) {  // buy
                sum1 += a[j].num;
            }
            if (a[j].type == 0 && a[j].price <= p0) {  // sell
                sum2 += a[j].num;
            }
        }
        if (ans < min(sum1, sum2)) {
            ans = min(sum1, sum2);
            price = p0;
        } else if (ans == min(sum1, sum2)) {
            price = max(price, p0);
        }
    }
    printf("%.2lf %lld", price, ans);
    return 0;
}