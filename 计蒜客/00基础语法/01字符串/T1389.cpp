#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int n;
string s;
const int w[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 24};
const char m[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
int main() {
    cin >> n;
    bool ck = true;
    getchar();
    while (n--) {
        getline(cin, s);
        long long sum = 0;
        bool f = true;
        for (int i = 0; i < 17; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                sum += (s[i] - '0') * w[i];
            } else {
                f = false;
                break;
            }
        }
        if (f == false)
            cout << s << endl, ck = false;
        else {
            int z = sum % 11;
            if (s[17] != m[z]) cout << s << endl, ck = false;
        }
    }
    if (ck) cout << "All passed";
    return 0;
}