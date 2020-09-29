#include <iostream>
using namespace std;

int main() {
    for (int x = 0; x <= 33; x++)
        for (int y = 0; y <= 20; y++)
            for (int z = 0; z <= 100; z += 3)
                if (x + y + z == 100 && 3 * x + 5 * y + z / 3 == 100)
                    cout << x << " " << y << " " << z << endl;
    return 0;
}