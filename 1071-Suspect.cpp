#include <stdio.h>

//1071.验证角谷猜想
/*题目描述
数论中有许多猜想尚未解决，其中有一个被称为“角谷猜想”的问题，该问题在五、六十年代的美国多个著名高校中曾风行一时，这个问题是这样描述的：任何一个大于一的自然数，如果是奇数，则乘以三再加一；如果是偶数，则除以二；得出的结果继续按照前面的规则进行运算，最后必定得到一。现在请你编写一个程序验证他的正确性。
输入
题目包含多组测试数据，第一行为测试数据组数N，接着是N行的正整数。
输出
输出验证“角谷猜想”过程中的奇数，最后得到的1不用输出；每个测试题输出一行；每行中只有两个输出之间才能有一个空格；如果没有这样的输出，则输出：No number can be output !。
样例输入
4
5
9
16
11
样例输出
5
9 7 11 17 13 5
No number can be output !
11 17 13 5*/

int main(){
    int n,m;
    scanf("%d",&n);
    while(n--){
        int count=0;
        scanf("%d",&m);
        while(m-1){
            if(m%2==1){
                count++;
                if(count==1) printf("%d",m);
                else printf(" %d",m);
                m=m*3+1;
            }else{
                m/=2;
            }
        }
        if(count==0) printf("No number can be output !");
        printf("\n");
    }
    return 0;
}
