#include <stdio.h>

//1019.石头剪刀布
/*题目描述
现在有两个人在玩石头剪子布游戏，请你判断最后谁赢了。
用R代表石头，S代表剪子，P代表布。
输入
输入的第一行是一个整数t（0<t<1000），表示测试样例的数目。
每组输入样例的第一行是一个整数n（0<n<100），表示游戏次数。
接下来n行，每行由两个字母组成，两个字母之间用一个空格分隔，这些字母只会是R，S或P。
第一个字母表示Player1的选择，第二个字母表示Player2的选择。
输出
对于每组输入样例，输出获胜方的名字（Player1或Player2），如果平均，则输出TIE。
样例输入
3
2
R P
S R
3
P P
R S
S R
1
P R
样例输出
Player 2
TIE
Player 1*/

int VS(char c1,char c2){
    if(c1==c2) return 0;
    if((c1=='R'&&c2=='S')||(c1=='S'&&c2=='P')||(c1=='P'&&c2=='R')) return 1;
    if((c1=='S'&&c2=='R')||(c1=='P'&&c2=='S')||(c1=='R'&&c2=='P')) return -1;
}//1甲赢，0平局，-1乙赢

int main(){
    int t;//测试样例的数目
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;//游戏次数
        char c1,c2;//c吸收空格
        int vs=0;//胜负
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            getchar();
            scanf("%c",&c1);
            getchar();
            scanf("%c",&c2);
            vs+=VS(c1,c2);
        }
        if(vs>0) printf("Player 1\n");
        else if(vs==0) printf("TIE\n");
        else printf("Player 2\n");
    }
    return 0;
}
