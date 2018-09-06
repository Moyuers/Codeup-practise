#include <stdio.h>

//25586.例题5-1-1 连续自然数求和
/*题目描述
求1+2+3+...+100，即求



要求用while语句实现

输入
无
输出
要求的和，末尾输出换行。
样例输入
无
样例输出
5050*/

int main(){
    int sum=0;
    for(int i=1;i<=100;i++)
        sum+=i;
    printf("%d\n",sum);
    return 0;
}
