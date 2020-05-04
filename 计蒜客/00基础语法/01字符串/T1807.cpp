#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
string s;
int k;
int main() {
    cin >> s;
    cin >> k;
    int n = s.size();
    if (abs(k) > n) {
        cout << "Error";
        return 0;
    }
    if (k == 0)
        cout << atoi(s.c_str());
    else if (k > 0)
        cout << atoi(s.substr(0, k).c_str());
    else
        cout << atoi(s.substr(n - abs(k)).c_str());
    return 0;
}