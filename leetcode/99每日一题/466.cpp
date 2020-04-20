#include <cstring>
#include <iostream>
#include <unordered_map>
using namespace std;
int getMaxRepetitions(string s1, int n1, string s2, int n2) {
    if (n1 == 0) return 0;
    int n = s2.size();
    int indexr[n + 1];
    int countr[n + 1];
    int index = 0, count = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < s1.size(); j++) {
            if (s1[j] == s2[index]) ++index;
            if (index == s2.size()) {
                index = 0;
                ++count;
            }
        }
        countr[i] = count;
        indexr[i] = index;
        for (int k = 0; k < i; k++) {
            if (indexr[k] == index) {
                int prev_count = countr[k];
                int pattern_count =
                    (countr[i] - countr[k]) * ((n1 - 1 - k) / (i - k));
                int remain_count =
                    countr[k + (n1 - 1 - k) % (i - k)] - countr[k];
                return (prev_count + pattern_count + remain_count) / n2;
            }
            if (index == 0) {
                int prev_count = 0;
                int pattern_count = (countr[i]) * (n1 / (i + 1));
                int remain_count;
                if (n1 % (i + 1) > 0)
                    remain_count = countr[n1 % (i + 1) - 1];
                else
                    remain_count = 0;
                return (prev_count + pattern_count + remain_count) / n2;
            }
        }
    }
    return countr[n1 - 1] / n2;
}
int main() {
    string s1, s2;
    int n1, n2;
    cin >> s1 >> n1 >> s2 >> n2;
    cout << getMaxRepetitions(s1, n1, s2, n2);
    return 0;
}