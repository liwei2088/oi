#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    int mx = 0;
    for (int i = 1; i <= n; i++) {
        string name;
        int fs;
        cin >> fs >> name;
        if (fs > mx) {
            mx = fs;
            s = name;
        }
    }
    cout << s;
    return 0;
}