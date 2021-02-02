#include <cstdio>
#include <iostream>
#include <set>
using namespace std;
int n;
set<int> st;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << st.size();
    return 0;
}