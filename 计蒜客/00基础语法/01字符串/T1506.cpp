#include <cstring>
#include <iostream>
using namespace std;
int n;
string s;
string w[] = {"", "one", "two", "three"};
int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        int len = s.size();
        for (int i = 1; i <= 3; i++) {
            int cnt = 0;
            for (int j = 0; j < len; j++)
                if (s[j] != w[i][j]) cnt++;
            if (len == w[i].size() && cnt <= 1) cout << i << endl;
        }
    }
    return 0;
}