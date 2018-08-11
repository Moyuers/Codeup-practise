#include <stdio.h>

/*题目描述
你的任务是计算若干整数的和。

输入
每行的第一个数N，表示本行后面有N个数。

输出
对于每一行数据需要在相应的行输出和。

样例输入
4 1 2 3 4
5 1 2 3 4 5
样例输出
10
15*/

int main(){
    int n,a,sum;
    while(scanf("%d",&n)!=EOF){
        sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum);
    }
    return 0;
}
