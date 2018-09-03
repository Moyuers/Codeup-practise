#include <stdio.h>
#include <math.h>

//25345.习题4-4 三个整数求最大值
/*题目描述
有3个整数a, b, c，由键盘输入，输出其中最大的数。
输入
以空格分割的三个整数。
输出
三个数中的最大值，末尾换行。
样例输入
1 3 2
样例输出
3*/

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c) printf("%d\n",a);
    else if(b>=a&&b>=c) printf("%d\n",b);
    else printf("%d\n",c);
    return 0;
}
