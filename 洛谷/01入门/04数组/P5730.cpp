#include <iostream>
using namespace std;
int n;
string s;
string x[][10] = {
    {"XXX", "..X", "XXX", "XXX", "X.X", "XXX", "XXX", "XXX", "XXX", "XXX"},
    {"X.X", "..X", "..X", "..X", "X.X", "X..", "X..", "..X", "X.X", "X.X"},
    {"X.X", "..X", "XXX", "XXX", "XXX", "XXX", "XXX", "..X", "XXX", "XXX"},
    {"X.X", "..X", "X..", "..X", "..X", "..X", "X.X", "..X", "X.X", "..X"},
    {"XXX", "..X", "XXX", "XXX", "..X", "XXX", "XXX", "..X", "XXX", "XXX"}};
int main() {
    cin >> n >> s;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < s.size(); j++) {
            if (j != 0) cout << ".";
            cout << x[i][s[j] - '0'];
        }
        cout << endl;
    }

    return 0;
}