#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map<int, int> mp;
int dp(int k, int n) {
    //因为k取值<=100 这里其实是把n*100+k作为唯一KEY
    if (mp.find(n * 100 + k) == mp.end()) {
        int ans = 0;
        if (n == 0)  //如果楼层高度为0 则答案=0 不需要任何尝试次数
            ans = 0;
        else if (k == 1)  //如果鸡蛋为1 则必须线性搜索 尝试次数为n
            ans = n;
        else {
            //进行二分
            int l = 1, r = n;
            while (l < r) {
                int m = (l + r + 1) / 2;
                int t1 = dp(k - 1, m - 1);  //如果在m层尝试失败
                int t2 = dp(k, n - m);      //如果在m层尝试不失败
                if (t2 >= t1)
                    l = m;
                else
                    r = m - 1;
            }
            ans = 1 + max(dp(k - 1, l - 1), dp(k, n - l));
        }
        mp[n * 100 + k] = ans;
    }
    return mp[n * 100 + k];
}

int superEggDrop(int K, int N) { return dp(K, N); }

int main() {
    int k, n;
    cin >> k >> n;
    cout << superEggDrop(k, n);
    return 0;
}