#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int findLucky(vector<int>& arr) {
    sort(arr.begin(), arr.end(), greater<int>());
    int t = arr[0], cnt = 1, ans = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (t == arr[i])
            cnt++;
        else {
            if (cnt == t) {
                return t;
            }
            cnt = 1;
            t = arr[i];
        }
    }
    if (cnt == t) return t;
    return -1;
}

int main() {
    vector<int> v;
    int x;
    while (cin >> x) v.push_back(x);
    cout << findLucky(v);
    return 0;
}