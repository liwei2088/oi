#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

bool hasGroupsSizeX(vector<int>& deck) {
    int count[10000], n = 0;
    //leetcoe多组数据一起测试，所以要做好初始化工作
    memset(count, 0, sizeof(count));  
    for (int i = 0; i < deck.size(); i++) {
        n = max(n, deck[i]);
        count[deck[i]]++;
    }
    int g = -1;
    for (int i = 0; i <= n; i++) {
        if (count[i] > 0) {
            if (g == -1)
                g = count[i];
            else
                g = gcd(g, count[i]);
        }
    }
    return g >= 2;
}

int main() {
    vector<int> v;
    int x;
    while (cin >> x) v.push_back(x);
    if (hasGroupsSizeX(v))
        puts("true");
    else
        puts("no");
    return 0;
}