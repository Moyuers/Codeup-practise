#include <stdio.h>

//1137.C语言1.3
/*题目描述
输入两个整数，比较大小并输出“max=”，之后输出较大的值。

输入
两个整数，用逗号分隔。

输出
请输出读入的两个整数的较大值，并在较大值之前输出“max=”。
请注意不需要输出引号，行尾输出换行。

样例输入
8,5
样例输出
max=8*/

int main(){
    int a,b;
    scanf("%d,%d",&a,&b);
    if(a>b) printf("max=%d\n",a);
    else printf("max=%d\n",b);
    return 0;
}
