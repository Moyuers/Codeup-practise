#include <stdio.h>

//1015.构建矩阵
/*题目描述
现请你构建一个N*N的矩阵，第i行j列的元素为i与j的乘积。（i，j均从1开始）
输入
输入的第一行为一个正整数C，表示测试样例的个数。
然后是C行测试样例，每行为一个整数N（1<=N<=9），表示矩阵的行列数。
输出
对于每一组输入，输出构建的矩阵。
样例输入
2
1
4
样例输出
1
1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16*/

int main(){
    int m,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        for(int j=1;j<=m;j++){
            for(int k=1;k<=m;k++){
                printf("%d ",j*k);
            }
            printf("\n");
        }
    }
    return 0;
}
