#include <cstring>
#include <iostream>
using namespace std;
string a, b;
double d;
int main() {
    cin >> d;
    cin >> a >> b;
    int cnt = 0;
    for (int i = 0; a[i]; i++)
        if (a[i] == b[i]) cnt++;
    if (cnt * 1.0 / a.size() >= d)
        cout << "yes";
    else
        cout << "no";
    return 0;
}