#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    //a表示男生人数 b表示女生人数
    cin >> a >> b;
    //n表示曲目数
    cin >> n;
    //男女都是第一个人开始
    int i = 1, j = 1;
    while (n != 0) {
        //当指向最后一个人时，回到第一个人
        if (i == a + 1) i = 1; 
        if (j == b + 1) j = 1;
        cout << i << " " << j << endl;
        i++, j++;
        n--;
    }
    return 0;
}