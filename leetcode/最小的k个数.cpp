#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

//解法1： 可以直接使用排序 输出前K个元素
/*
vector<int> getLeastNumbers(vector<int>& arr, int k) {
    vector<int> res;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < k; i++) res.push_back(arr[i]);
    return res;
}
*/
//解法2： 可以使用优先队列
/*
vector<int> getLeastNumbers(vector<int>& arr, int k) {
    vector<int> res(0);
    priority_queue<int, vector<int>, greater<int> > q;
    for (int i = 0; i < arr.size(); i++) q.push(arr[i]);
    for (int i = 1; i <= k; i++) {
        res.push_back(q.top());
        q.pop();
    }
    return res;
}
*/

//题解3： 可以使用分治算法（快速排序）
void quickSort(vector<int>& arr, int l, int r, int k) {

}

vector<int> getLeastNumbers(vector<int>& arr, int k) {
    vector<int> res(0);
    quickSort(arr, 0, arr.size() - 1, k);
    for (int i = 0; i < k; i++) res.push_back(arr[i]);
    return res;
}

int main() {
    int x, n, k;
    vector<int> v;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        v.push_back(x);
    }
    vector<int> res = getLeastNumbers(v, k);
    for (int i = 0; i < k; i++) cout << res[i] << " ";
    return 0;
}