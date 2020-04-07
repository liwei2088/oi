#include <iostream>
#include <vector>
using namespace std;

vector<int> maxDepthAfterSplit(string seq) {
    vector<int> v;
    int d = 1;
    for (int i = 0; i < seq.size(); i++) {
        if (seq[i] == '(') {
            ++d;
            v.push_back(d % 2);
        } else {
            v.push_back(d % 2);
            --d;
        }
    }

    return v;
}

int main() {
    string s;
    cin >> s;
    vector<int> t = maxDepthAfterSplit(s);
    for (int i = 0; i < t.size(); i++) cout << t[i] << " ";
    return 0;
}