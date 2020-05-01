#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    while (n--) {
        string s;
        double w;
        int k;
        cin >> s >> w >> k;
        if (w >= 37.5 && k == 1) {
            cnt++;
            cout << s << endl;
        }
    }
    cout << cnt;
    return 0;
}