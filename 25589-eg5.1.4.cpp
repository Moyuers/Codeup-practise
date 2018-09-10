#include <stdio.h>

//25589.问题 D: 例题5-1-4 连续自然数求和
/*题目描述
输入一个正整数N，求1+2+...+N，即求


要求在程序中使用break语句。 

输入
要求输入的数据一定是一个正整数。
输出
计算的结果，连续N个自然数的和，末尾输出换行。
样例输入
100
样例输出
5050*/

int main(){
    int sum=0;
    int i=1,n;
    scanf("%d",&n);
    while(1){
        sum+=i;
        i++;
        if(i>n) break;
    };
    printf("%d\n",sum);
    return 0;
}
