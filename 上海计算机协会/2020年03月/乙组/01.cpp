#include <iostream>
using namespace std;
int m, idx = 0, cnt = 0;
string w[50005];
int main() {
    cin >> m;
    while (m--) {
        char ch;
        cin >> ch;
        if (ch == 'v') {
            string web;
            idx++;
            cnt = idx;  //访问新的网址时，需要更新边界
            cin >> web;
            w[idx] = web;
            cout << w[idx] << endl;
        } else if (ch == 'b') {
            if (idx > 1)
                idx--, cout << w[idx] << endl;
            else
                cout << "?" << endl;
        } else {
            if (idx < cnt)
                idx++, cout << w[idx] << endl;
            else
                cout << "?" << endl;
        }
    }
    return 0;
}