#include <algorithm>
#include <iostream>
using namespace std;
const string number[] = {
    "zero",     "one",      "two",      "three",   "four",    "five",
    "six",      "seven",    "eight",    "nine",    "ten",     "eleven",
    "twelve",   "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
    "eighteen", "nineteen", "twenty"};
int a[20], k;
int main() {
    long long ans = 0;
    for (int i = 1; i <= 6; i++) {
        string t;
        cin >> t;
        transform(t.begin(), t.end(), t.begin(), ::tolower);
        for (int j = 0; j <= 20; j++)
            if (t == number[j]) a[++k] = j * j % 100;
        if (t == "a" || t == "first")
            a[++k] = 1 * 1;
        else if (t == "both" || t == "second")
            a[++k] = 2 * 2;
        else if (t == "another" || t == "third")
            a[++k] = 3 * 3;
    }
    sort(a + 1, a + k + 1);
    for (int i = 1; i <= k; i++) ans = ans * 100 + a[i];
    cout << ans;
    return 0;
}