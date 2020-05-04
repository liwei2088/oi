#include <algorithm>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;
int n;
set<string> st;
string s;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        sort(s.begin(), s.end());
        st.insert(s);
    }
    cout << st.size();
    return 0;
}