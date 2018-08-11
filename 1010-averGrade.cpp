#include <stdio.h>
#include <string.h>

//1010平均绩点
/*题目描述
每门课的成绩分为A、B、C、D、F五个等级，为了计算平均绩点，规定A、B、C、D、F分别代表4分、3分、2分、1分、0分。
输入
有多组测试样例。每组输入数据占一行，由一个或多个大写字母组成，字母之间由空格分隔。
输出
每组输出结果占一行。如果输入的大写字母都在集合｛A,B,C,D,F｝中，则输出对应的平均绩点，结果保留两位小数。否则，输出“Unknown”。
样例输入
A B C D F
B F F C C A
D C E F
样例输出
2.00
1.83
Unknown*/

//!空格也占一个字符数
int main(){
    char a[100];
    double sum,aver;
    int n;
    bool flag;//判断输入的字母有无集合外的
    while(gets(a)){
        flag=true;
        sum=0;
        n=0;
        for(int i=0;i<strlen(a);i+=2){
            if(a[i]=='A') sum+=4,n++;
            else if(a[i]=='B') sum+=3,n++;
            else if(a[i]=='C') sum+=2,n++;
            else if(a[i]=='D') sum+=1,n++;
            else if(a[i]=='F') sum+=0,n++;
            else flag=false;
        }
        aver=sum/n;
        if(flag==true){
            printf("%.2f\n",aver);
        }
        if(flag==false){
            printf("Unknown\n");
        }
    }
    return 0;
}
