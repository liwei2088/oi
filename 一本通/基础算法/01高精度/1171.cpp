#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
string c;

bool div(string s, int k) {
    vector<int> a;
    int t = 0;
    for (int i = 0; i < s.size(); i++) {
        t = t * 10 + s[i] - '0';
        a.push_back(t / k);
        t %= k;
    }
    return t;
}

int main() {
    cin >> c;
    bool f = true;
    for (int i = 2; i <= 9; i++)
        if (!div(c, i)) {
            f = false;
            cout << i << " ";
        }
    if (f) cout << "none";
    return 0;
}