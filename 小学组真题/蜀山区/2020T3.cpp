#include <iostream>
using namespace std;
const int N = 5000005;
long long s[N], prime[N], psum[N], pn;
bool vis[N];
void work(int n) {
    s[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (!vis[i]) {
            prime[++pn] = i;
            psum[i] = s[i] = i + 1;
        }
        for (int j = 1; j <= pn && i * prime[j] <= n; j++) {
            vis[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                psum[i * prime[j]] = psum[i] * prime[j] + 1;
                s[i * prime[j]] = s[i] / psum[i] * psum[i * prime[j]];
                break;
            }
            s[i * prime[j]] = s[i] * (prime[j] + 1);
            psum[i * prime[j]] = 1 + prime[j];
        }
    }
}

int main() {
    int t, n;
    work(5000000);
    cin >> t;
    while (t--) {
        cin >> n;
        cout << s[n] << endl;
    }
    return 0;
}