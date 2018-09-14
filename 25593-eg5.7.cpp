#include <stdio.h>
#include <math.h>

//25593.例题5-7 求圆周率pi的近似值
/*题目描述
用如下公式
pi/4=1-1/3+1/5-1/7...

求圆周率PI的近似值，直到发现某一项的绝对值小于10-6为止（该项不累加）。

要求输出的结果总宽度占10位，其中小数部分为8位。

程序中使用浮点型数据时，请定义为双精度double类型。

如果需要计算绝对值，可以使用C语言数学库提供的函数fabs，如求x的绝对值，则为fabs(x).

输入
无

输出
PI=圆周率的近似值

输出的结果总宽度占10位，其中小数部分为8位。

末尾输出换行。

样例输入
无
样例输出
PI=3.14159065*/

int main(){
    double PI,term,num,flag,sum;
    term=num=flag=1;
    sum=0;
    double a=pow(10,-6);
    while(fabs(term)>=a){
        sum+=term;
        num+=2;
        flag=-flag;
        term=flag/num;
    }
    PI=sum*4;
    printf("PI=%.8f\n",PI);
    return 0;
}
