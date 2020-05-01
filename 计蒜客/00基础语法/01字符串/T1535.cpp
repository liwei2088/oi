#include <cstring>
#include <iostream>
using namespace std;
const string w[] = {"bowl", "knife", "fork", "chopsticks"};
int n;
string s;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        for (int j = 0; j < 4; j++)
            if (s == w[j]) {
                cout << s << " ";
                break;
            }
    }
    return 0;
}