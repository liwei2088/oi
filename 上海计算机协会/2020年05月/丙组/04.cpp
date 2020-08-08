#include <iostream>
using namespace std;
//反向思考， 从 t来转换到s
int main() {
    int s, t;
    cin >> s >> t;
    int ans = 0;
    while (s < t) {
        if (t % 2 == 1)  //如果是奇数 只能一步一步走
            t--;
        else if (2 * s <= t)  //如果是偶数可以*2
            t /= 2;
        else   // 2*s>t 还需需要一步一步走 将结果直接累加 (t-s)            
            break;  //其他情况只能一步一步走
        ans++;
    }
    // t-s是最后没有处理的几步，必须一步一步走
    cout << ans + (t - s);  
    return 0;
}