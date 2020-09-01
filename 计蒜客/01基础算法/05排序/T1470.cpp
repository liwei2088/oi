#include <algorithm>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int x = atoi(s.c_str());
    sort(s.begin(), s.end(), greater<char>());
    int y = atoi(s.c_str());
    cout << y - x;
    return 0;
}