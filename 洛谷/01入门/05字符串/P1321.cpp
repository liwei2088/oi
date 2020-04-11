#include <iostream>
using namespace std;
string s;
int main() {
    int x = 0, y = 0;
    cin >> s;
    int n = s.size();
    //只需要判断从 I 位开始是否可能含有boy就可以了。
    //例如 GOR 如果遍历到G 可以发现下一个是O 说明下面一定有一个boy
    for (int i = 0; i < n - 2; i++)
        x += (s[i] == 'b' || s[i + 1] == 'o' || s[i + 2] == 'y');
    for (int i = 0; i < n - 3; i++)
        y += (s[i] == 'g' || s[i + 1] == 'i' || s[i + 2] == 'r' ||
              s[i + 3] == 'l');
    cout << x << endl << y << endl;
    return 0;
}