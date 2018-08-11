#include <stdio.h>

//1011.软件版本
/*题目描述
相信大家一定有过在网上下载软件而碰到多个不同版本的情况。一般来说，软件的版本号由三个部分组成，主版本号（Major Version Number），子版本号（Minor Version Number)和修订号（Revision_Number）。当软件进行了重大的修改时，主版本号加一；当软件在原有基础上增加部分功能时，主版本号不变，子版本号加一；当软件仅仅修正了部分bug时，主版本号和子版本号都不变，修正号加一。
在我们比较软件的两个版本的新旧时，都是先比较主版本号，当主版本号相同时再比较子版本号，前两者都相同的情况下再比较修正号。版本号越大的软件越新。
现在，小明在下载软件的时候碰到了两个版本，请你告诉他哪个版本更新一些。
输入
输入的第一行有一个整数T，代表有T组测试。接下来有T组测试。
每组测试分两行，第一行有三个整数代表第一个软件版本的主版本号，子版本号和修订号。第二行也有三个整数代表第二个软件版本的主版本号，子版本号和修订号。
数据中出现的整数都在[0，1000]范围之内。
输出
对于每组测试，如果第一个软件的版本新点，请输出First，如果第二个软件的版本新点，请输出Second，否则输出Same。
样例输入
3
1 1 0
1 1 1
1 1 1
1 1 0
1 1 1
1 1 1
样例输出
Second
First
Same*/

int Bigone(int a,int b){
    if(a>b) return 1;
    if(a==b) return 2;
    if(a<b) return 3;
}

int main(){
    int T;
    scanf("%d",&T);
    int Ma1,Mi1,R1;
    int Ma2,Mi2,R2;
    for(int i=0;i<T;i++){
        scanf("%d %d %d",&Ma1,&Mi1,&R1);
        scanf("%d %d %d",&Ma2,&Mi2,&R2);
        int a=Bigone(Ma1,Ma2);
        int b=Bigone(Mi1,Mi2);
        int c=Bigone(R1,R2);
        if(a==1) printf("First\n");
        else if(a==3) printf("Second\n");
        else if(a==2){
            if(b==1) printf("First\n");
            else if(b==3) printf("Second\n");
            else if(b==2){
                if(c==1) printf("First\n");
                else if(c==3) printf("Second\n");
                else if(c==2) printf("Same\n");
            }
        }
    }
    return 0;
}
