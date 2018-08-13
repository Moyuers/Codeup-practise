#include <stdio.h>

//1026.布尔矩阵
/*题目描述
一个布尔矩阵有一种奇偶性，即该矩阵所有行和所有列的和都是偶数。下面这4×4的矩阵就具有奇偶性：
1 0 1 0
0 0 0 0
1 1 1 1
0 1 0 1
它所有行的和是2，0，4，2。它所有列的和是2，2，2，2。
现请你编写一个程序，读入这个矩阵并检查它是否具有奇偶性。如果没有，你的程序应当再检查一下它是否可以通过修改一位（把0修改为1，把1修改为0）来使它具有奇偶性。如果不可能，这个矩阵就被认为是破坏了。
输入
输入包含多组测试数据。每组测试数据的第一行是一个整数n（1<=n<=100），代表该矩阵的大小。在接下来的行中，每行有n个整数。矩阵是由0或1构成的。n=0时，输入结束。
输出
对于每组输入，如果这个矩阵具有奇偶性，则输出“OK”。如果奇偶性能通过只修改该矩阵中的一位来建立，那么输出“Change bit (i,j)”，这里i和j是被修改的这位的行号和列号。否则，输出“Corrupt”。
样例输入
4
1 0 1 0
0 0 0 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 0 1 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 1 1 0
1 1 1 1
0 1 0 1
0
样例输出
OK
Change bit (2,3)
Corrupt*/

int main(){
    int a[105][105]={0};
    int n;
    while(scanf("%d",&n)!=EOF&&n!=0){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        int row_odd=0,col_odd=0;
        int row,col;
        for(int i=1;i<=n;i++){
            int sum=0;
            for(int j=1;j<=n;j++){
                sum+=a[i][j];
            }
            if(sum%2!=0) row_odd++,row=i;
        }
        for(int j=1;j<=n;j++){
            int sum=0;
            for(int i=1;i<=n;i++){
                sum+=a[i][j];
            }
            if(sum%2!=0) col_odd++,col=j;
        }
        if(row_odd==0&&col_odd==0) printf("OK\n");
        else if(row_odd=1&&col_odd==1) printf("Change bit (%d,%d)\n",row,col);
        else printf("Corrupt\n");
    }
    return 0;
}
