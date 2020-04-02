#include <cstring>
#include <iostream>
using namespace std;

/*
    使用双指针（尺取法）
    输入一个字符串 abc def ghi
    要求输出每一个单词
*/

int main() {
    char str[1000];
    gets(str);
    int n = strlen(str);
    //尺取法模板
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j < n && str[j] != ' ') j++;
        //后面放置具体的逻辑
        for (int k = i; k < j; k++) cout << str[k];
        cout << endl;
        i = j;
    }
    return 0;
}