#include <algorithm>
#include <iostream>
using namespace std;

const char d[] = {'9', '8', '7', '6', '5', '4', '3', '2', '1', '0'};

int main() {
    string s;
    cin >> s;
    for (int i = 0; s[i]; i++) s[i] = d[s[i] - '0'];
    swap(s[3], s[0]), swap(s[1], s[2]);
    cout << s;
    return 0;
}