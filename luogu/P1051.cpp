#include <algorithm>
#include <iostream>
using namespace std;

struct student {
    int no;
    char name[30];  //姓名
    int score1;     //期末平均成绩
    int score2;     //班级评议成绩
    char gb;        //是否是学生干部
    char xb;        //是否是西部省份学生
    int lw;         //发表的论文数
    int jj;         //奖学金数额
};

student stud[110];

int n, sum;

bool cmp(student x, student y) {
    if (x.jj == y.jj) return x.no < y.no;
    return x.jj > y.jj;
}

int main() {
    int i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> stud[i].name >> stud[i].score1 >> stud[i].score2 >> stud[i].gb >>
            stud[i].xb >> stud[i].lw;
        stud[i].no = i;
        if (stud[i].score1 > 80 && stud[i].lw >= 1) stud[i].jj += 8000;
        if (stud[i].score1 > 85 && stud[i].score2 > 80) stud[i].jj += 4000;
        if (stud[i].score1 > 90) stud[i].jj += 2000;
        if (stud[i].score1 > 85 && stud[i].xb == 'Y') stud[i].jj += 1000;
        if (stud[i].score2 > 80 && stud[i].gb == 'Y') stud[i].jj += 850;
        sum += stud[i].jj;
    }
    sort(stud + 1, stud + n + 1, cmp);
    cout << stud[1].name << endl;
    cout << stud[1].jj << endl;
    cout << sum;
    system("pause");
    return 0;
}