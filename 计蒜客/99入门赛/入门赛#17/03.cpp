#include <iostream>
#include <cstring>
using namespace std;
int a[25][25], b[25][25], t[25][25], n;

bool check() {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (b[i][j] != t[i][j]) return false;
    return true;
}

void xuzhuan90() {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) t[j][n + 1 - i] = a[i][j];
}

void xuzhuan180() {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) t[n + 1 - i][n + 1 - j] = a[i][j];
}

void xuzhuan270() {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) t[n + 1 - j][i] = a[i][j];
}

void print() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) cout << t[i][j] << " ";
        cout << endl;
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) cin >> a[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) cin >> b[i][j];
    memcpy(t, a, sizeof(t));
    if (check()) {
        cout << "0";
        return 0;
    }
    memcpy(t, a, sizeof(t));
    xuzhuan90();
    if (check()) {
        cout << "1";
        return 0;
    }
    memcpy(t, a, sizeof(t));
    xuzhuan180();
    if (check()) {
        cout << "2";
        return 0;
    }
    memcpy(t, a, sizeof(t));
    xuzhuan270();
    if (check()) {
        cout << "3";
        return 0;
    }
    cout << "-1";
    return 0;
}