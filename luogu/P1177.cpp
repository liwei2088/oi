#include <algorithm>
#include <ctime>
#include <iostream>
using namespace std;

int n, a[100005];

//不适合含大量重复数据的快排
/*
void qsort(int low, int high) {
    if (low >= high) return;
    srand((unsigned)time(0));
    int p = (rand() % (high - low + 1)) + low;
    int first = low;
    int last = high;
    swap(a[first], a[p]);
    int key = a[first];
    while (first < last) {
        while (first < last && a[last] >= key) last--;
        a[first] = a[last];
        while (first < last && a[first] <= key) first++;
        a[last] = a[first];
    }
    a[first] = key;
    qsort(low, first - 1);
    qsort(first + 1, high);
}
*/

void qsort(int low, int high) {
    if (low >= high) return;
    srand((unsigned)time(0));
    int p = (rand() % (high - low + 1)) + low;
    int i = low + 1;
    int first = low;
    int last = high;
    swap(a[first], a[p]);
    int key = a[first];
    while (i <= last) {
        if (a[i] > key) {
            swap(a[i], a[last]);
            last--;
        } else if (a[i] < key) {
            swap(a[i], a[first]);
            i++;
            first++;
        } else {
            i++;
        }
    }
    qsort(low, first - 1);
    qsort(last + 1, high);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    // random_shuffle(a + 1, a + n + 1);
    qsort(1, n);
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    system("pause");
    return 0;
}