#include <iostream>
using namespace std;
int n;
string a, b;
int main() {
    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a == "Rock" && b == "Scissors" || a == "Scissors" && b == "Paper" ||
            a == "Paper" && b == "Rock")
            cout << "Player1" << endl;
        else if (a == "Scissors" && b == "Rock" ||
                 a == "Paper" && b == "Scissors" || a == "Rock" && b == "Paper")
            cout << "Player2" << endl;
        else
            cout << "Tie" << endl;
    }
    return 0;
}