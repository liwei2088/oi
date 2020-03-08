#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

struct item {
    int price;
    int sales;
};

item items[100005];

// 政府指导价格 govPrice  成本价格 cost 成本价格销售量 salesAtCost
// 价格 price  销售量 sales  最高价外递减销售量 decrease  价格总数 cnt
int govPrice, cost, salesAtCost, price, sales, decrease, cnt, targetSales;

bool cmp(item x, item y) { return x.price < y.price; }

//处理价格之间未明确输入的数据（按照线性关系） 例如 28 30 两个价格之间缺少 29
void pricePocess() {
    item head, tail;
    // gapNum 表示相邻的两个输入价格的差
    // gapDec 表示相邻的两个输入价格的差形成的销售量差
    // n 表示items数组的总数
    int gapNum, gapDec, n = cnt;
    //遍历所有的价格
    for (int i = 1; i <= n - 1; ++i) {
        head = items[i];
        tail = items[i + 1];  //获取相邻的两个输入价格
        gapNum = tail.price - head.price;
        if (gapNum != 1) {
            gapDec = (tail.sales - head.sales) / gapNum;
            int t = head.sales;
            for (int j = 1; j < gapNum; j++) {
                t += gapDec;
                cnt++;
                items[cnt].price = head.price + j;
                items[cnt].sales = t;
            }
        }
    }
    sort(items + 1, items + cnt + 1, cmp);  //将新加入的价格和已有价格一起排序
    //处理未输入价格 这部分价格按照“最高单价外每升高一块钱将减少的销量”
    price = items[cnt].price;
    sales = items[cnt].sales;
    while (1) {
        price++;
        sales -= decrease;
        if (sales <= 0 || price < cost) {  //销量小于0 或者价格小于成本 退出
            break;
        } else {
            cnt++;
            items[cnt].price = price;
            items[cnt].sales = sales;
        }
    }
}

int main() {
    cin >> govPrice;             //输入政府指导价格
    cin >> cost >> salesAtCost;  //输入成本价格和成本价格销售量
    cnt = 1;
    items[cnt].price = cost;
    items[cnt].sales = salesAtCost;
    while (cin >> price >> sales) {
        if (price == -1 && sales == -1) break;
        cnt++;
        items[cnt].price = price;
        items[cnt].sales = sales;
    }
    cin >> decrease;
    sort(items + 1, items + cnt + 1, cmp);
    pricePocess();
    sort(items + 1, items + cnt + 1, cmp);
    int priceTag = -1;  //政府指导价在数组中的位置
    for (int i = 1; i <= cnt; ++i) {
        if (items[i].price == govPrice) {
            priceTag = i;
            targetSales = items[i].sales;
            break;
        }
    }
    if (priceTag == -1) {
        cout << "NO SOLUTION";
        return 0;
    } else {
        int moneyForOne = govPrice - cost;
        double limitMax = 100000000, limitMin = -1000000000;
        for (int i = 1; i < priceTag; i++) {
            double tempLimit = 1.0 *
                               (moneyForOne * targetSales -
                                ((items[i].price - cost) * items[i].sales)) /
                               (items[i].sales - targetSales);
            limitMax = min(tempLimit, limitMax);
        }
        for (int i = priceTag + 1; i <= cnt; i++) {
            double tempLimit = 1.0 *
                               ((items[i].price - cost) * items[i].sales -
                                moneyForOne * targetSales) /
                               (targetSales - items[i].sales);
            limitMin = max(tempLimit, limitMin);
        }
        int ans = 0;
        if (limitMin > limitMax) {
            cout << "NO SOLUTION";
            return 0;
        } else if (limitMin > 0) {
            if (fabs((limitMin) - (int)(limitMin)) > 1e-6)
                ans = (int)limitMin + 1;
            else
                ans = (int)limitMin;
        } else if (limitMax < 0) {
            if (fabs((limitMax) - (int)(limitMax)) > 1e-6)
                ans = (int)limitMax - 1;
            else
                ans = (int)limitMax;
        }
        cout << ans;
    }
    system("pause");
    return 0;
}