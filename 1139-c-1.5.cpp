#include <stdio.h>

//1139.C语言1.5
/*题目描述
输入三个整数，比较三个数的大小。输出“max=”，之后输出最大的值。

输入
三个整数，用逗号分隔。

输出
请输出读入的三个整数的最大值，并在最大值之前输出“max=”。
请注意不需要输出引号，行尾输出换行。

样例输入
8,5,20
样例输出
max=20*/

int main(){
    int a,b,c,max;
    scanf("%d,%d,%d",&a,&b,&c);
    max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    printf("max=%d\n",max);
    return 0;
}
