#include <iostream>
using namespace std;

int main() {
    for (int a = 1; a <= 9; a++)
        for (int b = 0; b <= 9; b++)
            for (int c = 0; c <= 9; c++) {
                int k = a * 100 + b * 10 + c;
                if (k == a * a * a + b * b * b + c * c * c) 
                    cout << k << endl;
            }
    return 0;
}