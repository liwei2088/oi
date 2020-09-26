#include <algorithm>
#include <iostream>
using namespace std;
int n, m;
char w[] = {'0', '1', '2', '3', '4', '5', '6', '7',
            '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
string s;
int main() {
    cin >> n >> m;
    while (n) {
        s.push_back(w[n % m]);
        n /= m;
    }
    sort(s.begin(), s.end(), greater<char>());
    cout << s;
    return 0;
}