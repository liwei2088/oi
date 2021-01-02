#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> get_div(int n) {
    vector<int> res;
    for (int i = 1; i * i <= n; i++)
        if (n % i == 0) {
            res.push_back(i);
            if (i != n / i) res.push_back(n / i);
        }
    sort(res.begin(), res.end());
    return res;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        vector<int> ans = get_div(x);
        for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}