#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <sstream>
using namespace std;
int n;
string s, t;
vector<string> q;
int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        s += ",";
        stringstream sstream(s);
        q.clear();
        while (getline(sstream, t, ',')) {
            q.push_back(t);
        }
        int k = q.size();
        cout << q[k - 1];
        for (int i = k - 2; i >= 0; i--) cout << "," << q[i];
        cout << endl;
    }
    return 0;
}