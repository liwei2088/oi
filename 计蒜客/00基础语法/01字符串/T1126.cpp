#include <algorithm>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
string s;
vector<string> a;
int main() {
    while (cin >> s) a.push_back(s);
    while (!a.empty()) cout << a.back() << " ", a.pop_back();
    return 0;
}