#include <iostream>
using namespace std;
int b;
char w[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A',
            'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K'};

string work(int n) {
    string s;
    while (n) {
        s = w[n % b] + s;
        n /= b;
    }
    return s;
}

bool check(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++, j--;
    }
    return true;
}

int main() {
    cin >> b;
    for (int i = 1; i <= 300; i++) {
        int t = i * i;
        string s = work(t);
        if (check(s)) {
            cout << work(i) << " " << s << endl;
        }
    }
    return 0;
}