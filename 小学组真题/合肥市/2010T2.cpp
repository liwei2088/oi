#include <iostream>
using namespace std;
int n, tp, sk[1000005];
string s;
int main() {
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
        if (s[i] >= 'A' && s[i] <= 'M')
            sk[++tp] = s[i];
        else if (s[i] >= 'N' && s[i] <= 'Z') {
            if (tp != 0 && sk[tp] == 'Z' - s[i] + 'A') {
                tp--;
            } else {
                cout << "0";
                return 0;
            }
        }
    if (tp != 0)
        cout << "0";
    else
        cout << "1";
    return 0;
}