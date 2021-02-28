#include <cstdio>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int n, m;
vector<string> html;
map<string, string> vars;
int main() {
    cin >> n >> m;
    getchar();
    while (n--) {
        string s;
        getline(cin, s);
        html.push_back(s);
    }
    while (m--) {
        string key, value;
        cin >> key;
        char c;
        while (c = getchar(), c != '\"');
        while (c = getchar(), c != '\"') value += c;
        vars[key] = value;
    }
    for (int k = 0; k < html.size(); k++) {
        string str = html[k];
        for (int i = 0; i < str.size();) {
            if (i + 1 < str.size() && str[i] == '{' && str[i + 1] == '{') {
                int j = i + 3;
                string key;
                while (str[j] != ' ' || str[j + 1] != '}' || str[j + 2] != '}')
                    key += str[j++];
                cout << vars[key];
                i = j + 3;
            } else
                cout << str[i++];
        }
        cout << endl;
    }
    return 0;
}