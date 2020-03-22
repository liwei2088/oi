#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
string a;
int b;
vector<int> c;
/*
    高精度除法要注意是一个正序处理过程
    其他都是逆序处理过程
*/
int main() {
    cin >> a >> b;
    int la = a.size();
    int t = 0;
    bool f = false;
    for (int i = 0; i < la; i++) {
        t = t * 10 + a[i] - '0';
        if (!f && t / b != 0) f = true;
        if (f) c.push_back(t / b);
        t %= b;
    }
    for (int i = 0; i < c.size(); i++) cout << c[i];
    cout << endl;
    cout << t;
    return 0;
}