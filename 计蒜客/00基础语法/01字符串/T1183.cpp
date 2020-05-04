#include <algorithm>
#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
string s;
int a[305];
int main() {
    getline(cin, s);
    int n = s.size();
    int i = 0, j, k = 0;
    while (i < n) {
        while (i < n && (s[i] < '0' || s[i] > '9')) i++;
        j = i;
        while (j < n && s[j] >= '0' && s[j] <= '9') j++;
        if (i < j) a[++k] = atoi(s.substr(i, j - i).c_str());
        i = j;
    }
    if (k == 0) {
        cout << "0";
        return 0;
    }
    sort(a + 1, a + k + 1);
    for (int i = 1; i <= k; i++)
        if (i == 1)
            cout << a[i];
        else
            cout << "," << a[i];
    return 0;
}