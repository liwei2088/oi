#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double m, h, bmi;
    cin >> m >> h;
    bmi = m / (h * h);
    if (m < 18.5)
        cout << "Underweight";
    else if (m < 24)
        cout << "Normal";
    else {
        cout << fixed << setprecision(6) << bmi << endl;
        cout << "Overweight";
    }
    return 0;
}