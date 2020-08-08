#include <cstring>
#include <iostream>
using namespace std;
string s;

int main() {
    cin >> s;
    int cnt = 0;
    double sum = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+')
            sum += 0.3;
        else if (s[i] == '-')
            sum -= 0.3;
        else
            sum += 'E' - s[i], cnt++;
    }
    printf("%.2lf", sum / cnt);
    return 0;
}