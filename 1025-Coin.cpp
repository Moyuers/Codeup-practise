#include <stdio.h>

//1025.统计硬币
/*题目描述
假设一堆由1分、2分、5分组成的n个硬币总面值为m分，求一共有多少种可能的组合方式（某种面值的硬币可以数量可以为0）。
输入
输入数据第一行有一个正整数T，表示有T组测试数据。接下来的T行，每行有两个数n，m，n和m的含义同上。
输出
对于每组测试数据，请输出可能的组合方式数，每组输出占一行。
样例输入
2
3 5
4 8
样例输出
1
2*/

int main(){
    int t,m,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        int count=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                for(int k=0;k<=n;k++){
                    if(i+j+k>n) break;
                    if(((i+2*j+5*k)==m)&&(i+j+k==n)) count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
