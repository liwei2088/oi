#include <cstring>
#include <iostream>
using namespace std;
const char w[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'R', 'S', 'T'};
string s;
int main() {
    int n, cnt = 0;
    cin >> n;
    while (n--) {
        cin >> s;
        bool f = true;
        for (int i = 0; i < 10; i++)
            if (s[0] == w[i]) {
                f = false;
            }
        if (f) cnt++;
    }
    cout << cnt;
    return 0;
}