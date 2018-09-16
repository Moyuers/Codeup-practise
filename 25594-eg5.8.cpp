#include <stdio.h>

//25594.问题 H: 例题5-8 Fibonacci数列
/*题目描述
输入一个正整数n，求Fibonacci数列的第n个数。Fibonacci数列的特点：第1,2个数为1,1。从第3个数开始，概述是前面两个数之和。即：


要求输入的正整数n不超过50.

输入
一个不超过50的正整数
输出
Fibonacci数列的第n个数，末尾输出换行。
样例输入
20
样例输出
6765
*/

int main(){
    int n,a1,a2,sum;
    scanf("%d",&n);
    a1=a2=1;
    for(int i=3;i<=n;i++){
        sum=a1+a2;
        a1=a2;
        a2=sum;
    }
    printf("%d\n",sum);
    return 0;
}
