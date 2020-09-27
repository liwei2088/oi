#include <iostream>
using namespace std;
string a, b;

string div(string a, string b) {

}

string gcd(string a, string b) {
    if (b == "0")
        return a;
    else
        return gcd(b, div(a, b));
}

int main() {
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}