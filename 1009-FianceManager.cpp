#include <stdio.h>

//1009.财务管理
/*题目描述
小明毕业一年了，并且找到了一份好工作。这一年里他赚了很多钱，现在他想知道他这一年里的平均月薪是多少，请你写一个程序帮他计算。
输入
输入包括12行。第i行为第i个月的实际月薪。（i=1,2,3...）
输出
输出小明的平均月薪，保留两位小数，并且最前面输出一个￥符号。
样例输入
100.00
489.12
12454.12
1234.10
823.05
109.20
5.27
1542.25
839.18
83.99
1295.01
1.75
样例输出
￥1581.42*/

int main(){
    double a[12];
    double sum=0,aver;
    for(int i=0;i<12;i++){
        scanf("%lf",&a[i]);
        sum+=a[i];
    }
    aver=sum/12;
    printf("￥%.2f\n",aver);
    return 0;
}
