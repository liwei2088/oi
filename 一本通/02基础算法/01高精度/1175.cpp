#include <iostream>
#include <vector>
using namespace std;
string a;
vector<int> b;
int main() {
    cin >> a;
    int t = 0;
    bool f = false;
    for (int i = 0; i < a.size(); i++) {
        t = t * 10 + a[i] - '0';
        if (f || t / 13 != 0) {
            f = true;
            b.push_back(t / 13);
        }
        t %= 13;
    }
    for (int i = 0; i < b.size(); i++) cout << b[i];
    cout << endl;
    cout << t;
    return 0;
}