#include <iostream>
using namespace std;

int main() {
    for (int x = 0; x <= 25; x++) {
        int y = 100 - 4 * x;
        if (y % 7 == 0 && y >= 0) {
            y /= 7;
            int z = 100 - x - y;
            if (z % 3 == 0 && 3 * x + 5 * y + z / 3 == 100)
                cout << x << " " << y << " " << z << endl;
        }
    }
    return 0;
}