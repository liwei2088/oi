#include <cstring>
#include <iostream>
using namespace std;
string num[] = {"ling", "yi",  "er", "san", "si",
                "wu",   "liu", "qi", "ba",  "jiu"};

int main() {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (i == 0 && s[i] == '-') {
            cout << "fu ";
            continue;
        }
        cout << num[s[i] - '0'];
        if (i != n - 1) cout << " ";
    }
    return 0;
}