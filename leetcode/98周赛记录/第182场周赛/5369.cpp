#include <iostream>
#include <vector>
using namespace std;

int numTeams(vector<int>& rating) {
    int n = rating.size();
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                if (rating[i] > rating[j] && rating[j] > rating[k] ||
                    rating[i] < rating[j] && rating[j] < rating[k])
                    ans++;
    return ans;
}

int main() {
    vector<int> v;
    int x;
    while (cin >> x) v.push_back(x);
    cout << numTeams(v);
    return 0;
}