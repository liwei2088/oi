#include <iostream>
using namespace std;

int p1, p2, p3;
char s[150];

int main() {
    cin >> p1 >> p2 >> p3;
    cin >> s;
    int i = 0;
    char begin, end, ch;
    while (s[i] != 0) {
        begin = s[i - 1];
        end = s[i + 1];
        if (s[i] == '-' && begin < end &&
            ((begin >= '0' && end <= '9') || (begin >= 'a' && end <= 'z'))) {
            if (p3 == 1) {  //正序
                for (char j = begin + 1; j <= end - 1; j++) {
                    if (p1 == 2 && j>='a') {
                        ch = j - 'a' + 'A';
                    } else if (p1 == 3) {
                        ch = '*';
                    } else {
                        ch = j;
                    }
                    for (int k = 1; k <= p2; k++) {
                        cout << ch;
                    }
                }
            } else {  //逆序
                for (char j = end - 1; j >= begin + 1; j--) {
                    if (p1 == 2 && j>='a') {
                        ch = j - 'a' + 'A';
                    } else if (p1 == 3) {
                        ch = '*';
                    } else {
                        ch = j;
                    }
                    for (int k = 1; k <= p2; k++) {
                        cout << ch;
                    }
                }
            }
        } else {
            cout << s[i];
        }
        i++;
    }
    system("pause");
    return 0;
}