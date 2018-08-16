#include <stdio.h>

//1136.C语言1.2
/*题目描述
输出两数之和，并在两者的和之前输出“sum is ”。

输入
无。

输出
给定a = 123, b = 456, 请计算并输出a和b的和，并在两者的和之前输出“sum is ”。

请注意不需要输出引号，行尾输出换行。

样例输入
无。
样例输出
sum is 579*/

int main(){
    int a=123;
    int b=456;
    int sum=a+b;
    printf("sum is %d\n",sum);
    return 0;
}
