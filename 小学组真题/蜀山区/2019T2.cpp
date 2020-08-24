#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;
    double tw = s / 1.2;
    double tb = s / 3.0 + 50;
    if (tb > tw)
        printf("Walk %.1lf", tb - tw);
    else if (tb < tw)
        printf("Bike %.1lf", tw - tb);
    else
        printf("All");
    return 0;
}