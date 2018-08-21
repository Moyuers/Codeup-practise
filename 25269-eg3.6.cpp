#include <stdio.h>

//25269.例题3-9 字符输入输出
/*题目描述
从键盘输入三个字符BOY，然后把他们输出到屏幕上
输入
BOY三个字符，中间无分隔符
输出
BOY，注意末尾的换行
样例输入
BOY
样例输出
BOY*/

int main(){
    char a,b,c;
    scanf("%c%c%c",&a,&b,&c);
    printf("%c%c%c\n",a,b,c);
    return 0;
}
