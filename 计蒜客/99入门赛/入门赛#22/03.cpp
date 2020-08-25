#include <iostream>
using namespace std;
int year, week;
int dd[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main() {
    cin >> year >> week;
    int n = 365;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        n = 366;
        dd[2] = 29;
    }
    int ans = 0, month = 1, day = 1;
    for (int i = 1; i <= n; i++) {
        if (week == 6 || week == 7 || (month == 1 && day == 1) ||
            (month == 5 && day == 1) || (month == 10 && day == 1) ||
            (month == 10 && day == 2) || (month == 10 && day == 3) ||
            (month == 10 && day == 24)) {
            ans++;
        }
        day++;
        if (day > dd[month]) day = 1, month++;
        week++;
        if (week > 7) week = 1;
    }
    cout << ans;
    return 0;
}