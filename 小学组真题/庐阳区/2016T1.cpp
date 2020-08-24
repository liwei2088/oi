#include <iostream>
using namespace std;
int s;
int main() {
    cin >> s;
    double w = s / 1.0;
    double b = s / 3.0 + 50;
    if (w > b)
        cout << "Bike";
    else if (w < b)
        cout << "Walk";
    else
        cout << "All";
    return 0;
}