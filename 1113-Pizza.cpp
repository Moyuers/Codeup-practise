#include <stdio.h>

//1113.在披萨店里的思考
/*题目描述
今天小明来到一家披萨店吃披萨，由于实在太饿了，他决定点一个超大的披萨。不过这家店很奇怪，制作的披萨都是矩形的。于是爱思考的小明想知道这个披萨能否完全放置于自己所在的圆桌之内，也就是披萨是否一定会有部分悬空于桌边之外。请你编程帮他解决。
输入
输入包含多组测试数据。每组输入数据一开始为一个整数r（1<=r<=1000），表示圆桌面的半径，当r=0时，输入结束。
随后输入两个整数w和l，分别表示披萨的宽和长。（1<=w<=l<=1000）
输出
对于每组输入，输出披萨是否可以完全放在圆桌内。具体输出格式见所给的输出样例。
如果一个披萨刚刚与桌边相碰，那么属于可以完全放在圆桌内的。
样例输入
38 40 60
35 20 70
50 60 80
0
样例输出
Pizza 1 fits on the table.
Pizza 2 does not fit on the table.
Pizza 3 fits on the table.*/

//!考虑可以斜着放……。

int main(){
    int r,w,l;
    int count=1;
    while(scanf("%d",&r)!=EOF&&r!=0){
        scanf("%d %d",&w,&l);
        if(w*w+l*l<=(2*r)*(2*r)) printf("Pizza %d fits on the table.\n",count++);
        else printf("Pizza %d does not fit on the table.\n",count++);
    }
    return 0;
}
