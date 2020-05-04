#include <cstring>
#include <iostream>
using namespace std;
string s;

long long work(string t) {
    int n = t.size();
    long long p = 1, sum = 0;
    for (int i = n - 1; i >= 1; i--) sum += (s[i] - '0') * p, p *= 2;
    return sum;
}

void work1(string &t) {
    int n = t.size();
    for (int i = n - 1; i >= 0; i--)
        if (s[i] == '0')
            s[i] = '1';
        else {
            s[i] = '0';
            break;
        }
    for (int i = 1; i < n; i++)
        if (s[i] == '1')
            s[i] = '0';
        else
            s[i] = '1';
}

int main() {
    cin >> s;
    if (s[0] == '0')
        cout << work(s);
    else {
        work1(s);
        long long k = work(s);
        if (k == 0)
            cout << "-2147483648";
        else
            cout << "-" << k;
    }

    return 0;
}