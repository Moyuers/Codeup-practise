#include <stdio.h>

//例题1-2-2 求两整数数之和(2)
/*题目描述
从键盘上输入两个整数，并输出这两个数的和，即你的任务是计算a+b。
输入
输入空格分隔的两个整数
输出
对于用空格分隔的两个整数，求其和。

样例输入
5 6
样例输出
11
*/

int main(){
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("%d\n",sum);
    return 0;
}
