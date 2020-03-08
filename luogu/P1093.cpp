#include <algorithm>
#include <iostream>
using namespace std;

struct student {
    int no;       //序号
    int china;    //语文
    int math;     //数学
    int english;  //英语
    int total;    //总分
};

student a[310];
int n;

bool cmp(student x, student y) {
    if (x.total == y.total && x.china == y.china) return x.no < y.no;
    if (x.total == y.total) return x.china > y.china;
    return x.total > y.total;
}

int main() {
    int i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> a[i].china >> a[i].math >> a[i].english;
        a[i].total = a[i].china + a[i].math + a[i].english;
        a[i].no = i;
    }
    sort(a + 1, a + n + 1, cmp);
    for (i = 1; i <= 5; i++) {
        cout << a[i].no << " " << a[i].total << endl;
    }
    system("pause");
    return 0;
}