#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

//排序后 将重复数更改后后一位数
int minIncrementForUnique(vector<int>& A) {
    int res = 0;
    sort(A.begin(), A.end());
    for (int i = 1; i < A.size(); i++)
        if (A[i] <= A[i - 1]) {
            res += A[i - 1] + 1 - A[i];
            A[i] = A[i - 1] + 1;
        }
    return res;
}

/*
    945. 使数组唯一的最小增量
    思路：排序后处理重复数据
*/
int main() {
    vector<int> a;
    int x;
    while (cin >> x) a.push_back(x);
    cout << minIncrementForUnique(a);
    return 0;
}