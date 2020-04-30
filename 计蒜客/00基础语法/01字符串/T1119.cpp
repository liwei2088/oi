#include <iostream>
using namespace std;
string s, user, pass, email;
int n;

string work(string t) {
    for (int i = 0; t[i]; i++)
        if (t[i] >= 'a' && t[i] <= 'z')
            t[i] -= 32;
        else if (t[i] >= 'A' && t[i] <= 'Z')
            t[i] += 32;
    return t;
}

int main() {
    cin >> s;
    cin >> n;
    bool f = true;
    while (n--) {
        cin >> user >> pass >> email;
        if (s == email) {
            cout << user << " " << work(pass) << endl;
            f = false;
        }
    }
    if (f) cout << "empty";
    return 0;
}