#include <cstdio>
#include <iostream>
using namespace std;
string w[] = {"Lying", "Fishing", "Fishing", "Fishing", "Lying"};
int main() {
    int n;
    cin >> n;
    int k = n % 5;
    cout << w[k];
    return 0;
}