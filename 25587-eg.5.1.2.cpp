#include <stdio.h>

//25587.例题5-1-2 连续自然数求和
/*题目描述
求1+2+3+...+100，即求



要求用do...while语句实现

输入
无

输出
计算结果，注意末尾输出换行。

样例输入
无
样例输出
5050*/

int main(){
    int sum=0;
    int i=1;
    do{
        sum+=i;
        i++;
    }while(i<=100);
    printf("%d\n",sum);
    return 0;
}
