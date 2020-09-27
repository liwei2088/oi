#include <iostream>
using namespace std;
char d[] = {'N', 'W', 'S', 'E'};
int main() {
    int n;
    string s;
    cin >> n;
    int ans = 0;
    while (n--) {
        cin >> s;
        if (s == "left")
            ans = (ans + 1) % 4;
        else if (s == "right")
            ans = (ans - 1 + 4) % 4;
        else
            ans = (ans + 2) % 4;
    }
    cout << d[ans] << endl;
    return 0;
}