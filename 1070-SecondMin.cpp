#include <stdio.h>

//1070.寻找第二小的数
/*题目描述
求n个整数中第二小的数。
相同的整数看成一个数。比如，有5个数分别是1,1,3,4,5，那么第二小的数就是3。
输入
输入包含多组测试数据。输入的第一行是一个整数C，表示有C组测试数据；
每组测试数据的第一行是一个整数n，表示本组测试数据有n个整数（2<=n<=10），接着一行是n个整数（每个数均小于100）。
输出
为每组测试数据输出第二小的整数，如果不存在第二小的整数则输出“NO”，每组输出占一行。
样例输入
3
2
1 2
5
1 1 3 4 5
3
1 1 1
样例输出
2
3
NO*/

int main(){
    int c,n;
    int a[n];
    int b[n];
    scanf("%d",&c);
    for(int k=0;k<c;k++){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[j]<a[i]){
                    int temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
        int j=0;
        b[j++]=a[0];
        b[1]=b[0]-1;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]) b[j++]=a[i];
        }
        if(b[1]<b[0]) printf("NO\n");
        else printf("%d\n",b[1]);
    }
    return 0;
}
