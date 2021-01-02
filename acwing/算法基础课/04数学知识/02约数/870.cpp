#include <iostream>
#include <map>
using namespace std;
const int M = 1e9 + 7;
map<int, int> mp;

int main() {
    int n, x;
    long long ans = 1;
    cin >> n;
    while (n--) {
        cin >> x;
        for (int i = 2; i * i <= x; i++) {
            while (x % i == 0) {
                x /= i;
                mp[i]++;
            }
        }
        if (x > 1) mp[x]++;
    }
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        ans = (ans * (it->second + 1)) % M;
    }
    cout << ans;
    return 0;
}