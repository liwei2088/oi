#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

string w[] = {"zero",    "one",     "two",       "three",    "four",
              "five",    "six",     "seven",     "eight",    "nine",
              "ten",     "eleven",  "twelve",    "thirteen", "fourteen",
              "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
              "twenty"};

int a[10];

int main() {
    int i, j, k = 0;
    string t;
    for (i = 1; i <= 6; i++) {
        cin >> t;
        for (j = 0; j <= 20; j++) {
            if (t == w[j]) {
                a[++k] = j * j % 100;
                break;
            }
        }
        if (t == "a" || t == "first") {
            a[++k] = 1 * 1 % 100;
        }
        if (t == "both" || t == "second") {
            a[++k] = 2 * 2 % 100;
        }
        if (t == "another" || t == "third") {
            a[++k] = 3 * 3 % 100;
        }
    }
    sort(a + 1, a + k + 1);
    long long ans = 0;
    for (i = 1; i <= k; i++) {
        ans = ans * 100 + a[i];
    }
    cout << ans;
    system("pause");
    return 0;
}