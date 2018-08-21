#include <stdio.h>
#include <math.h>

//25332.例题4-1 一元二次方程求根
/*题目描述
求一元二次方程ax2+bx+c=0的根，三个系数a, b, c由键盘输入，且a不能为0，但不保证b2-4ac>0。

程序中所涉及的变量均为double类型。

输入
以空格分隔的一元二次方程的三个系数，双精度double类型
输出
分行输出两个根如下（注意末尾的换行）：

r1=第一个根

r2=第二个根

结果输出时，宽度占7位，其中小数部分2位。

如果方程无实根，输出一行如下信息（注意末尾的换行）：

No real roots!

样例输入
1 2 3
样例输出
No real roots!*/

int main(){
    double a,b,c;
    double r1,r2,delta;
    scanf("%lf %lf %lf",&a,&b,&c);
    delta=b*b-4*a*c;
    if(delta<0) printf("No real roots!\n");
    else{
        r1=((-b)+sqrt(delta))/(2*a);
        r2=((-b)-sqrt(delta))/(2*a);
        printf("r1=%7.2f\n",r1);
        printf("r2=%7.2f\n",r2);
    }
    return 0;
}
