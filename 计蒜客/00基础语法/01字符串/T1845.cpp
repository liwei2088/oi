#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string s;

bool isHW(string t) {
    int i = 0, j = t.size() - 1;
    while (i < j) {
        if (t[i] != t[j]) return false;
        i++, j--;
    }
    return true;
}

string work(string t, int k) {
    int n = t.size();
    string res;
    for (int i = 0; i < n; i++)
        if ((i + 1) % 2 == k) res.push_back(t[i]);
    return res;
}

int main() {
    cin >> s;
    if (isHW(s))
        cout << work(s, 0);
    else
        cout << work(s, 1);
    return 0;
}