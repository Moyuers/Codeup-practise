#include <stdio.h>

/*题目描述
你的任务是计算若干整数的和。
输入
输入的第一行为一个整数N，接下来N行每行先输入一个整数M，然后在同一行内输入M个整数。

输出
对于每组输入，输出M个数的和，每组输出之间输出一个空行。
样例输入
3
4 1 2 3 4
5 1 2 3 4 5
3 1 2 3
样例输出
10

15

6*/

int main(){
    int m,n;
    int sum,a;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        sum=0;
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n\n",sum);
    }
    return 0;
}
