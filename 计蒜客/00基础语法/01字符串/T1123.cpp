#include <cstring>
#include <iostream>
using namespace std;
string s, s1, s2;
int main() {
    getline(cin, s, ',');
    getline(cin, s1, ',');
    getline(cin, s2);
    int n = s1.size(), m = s2.size();
    int pos1 = s.find(s1);
    int pos2 = s.rfind(s2);
    if (pos1 == -1 || pos2 == -1 || pos1 + n - 1 >= pos2) {
        cout << -1;
        return 0;
    }
    cout << pos2 - pos1 - n;
    return 0;
}