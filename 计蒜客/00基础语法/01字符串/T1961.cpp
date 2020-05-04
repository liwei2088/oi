#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
string s;
int main() {
    cin >> s;
    if (s.find('-') != -1) {
        cout << "NO";
        return 0;
    }
    int n = s.size();
    int i = 0, cnt = 0;
    while (i < n) {
        if (s[i] >= '0' && s[i] <= '9') {
            int j = i;
            while (j < n && s[j] >= '0' && s[j] <= '9') j++;
            if (s[j] != '.' && s[j] != 0) {
                cout << "NO";
                return 0;
            }
            int sum = 0;
            for (int k = i; k < j; k++) sum = sum * 10 + (s[k] - '0');
            if (sum < 0 || sum > 255) {
                cout << "NO";
                return 0;
            }
            i = j + 1;
            cnt++;
            continue;
        }
        cout << "NO";
        return 0;
    }
    if (cnt == 4)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}