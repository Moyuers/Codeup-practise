#include <stdio.h>

//1008 ASCII码
/*题目描述
相信大家一定都知道大名鼎鼎的ASCII码，这次给你的任务是输入数字（表示ASCII码），输出相对应的字符信息。
输入
第一行为一个整数T（1<=T<=1000）。
接下来包括T个正整数，由空白符分割。（空白符包括空格、换行、制表符）
这些整数不会小于32。
输出
在一行内输出相应的字符信息。（注意不要输出任何多余的字符）
样例输入
13
72 101 108 108 111 44
32 119 111 114 108 100 33
样例输出
Hello, world!*/

int main(){
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        printf("%c",a);
    }
    return 0;
}
