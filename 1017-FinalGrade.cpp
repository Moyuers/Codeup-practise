#include <stdio.h>

//1017.期末成绩
/*题目描述
又到学期末，小明迎来了又一次的期末考试。虽然每学期都要考试，但是这次期末考试对小明来说意义重大。因为小明爱慕已久的女神说，如果小明这次考了全班前三名就做他女朋友。虽说小明没有十足的信心，但是女神的话不能不听啊。
考完试后，小明拿到了全班的成绩单，这张成绩单是按学号顺序排好的。小明很想知道班里到底有多少人分数比他高，现在就请你帮帮他，帮他数一下到底有多少人的分数比他高吧。
输入
输入数据的第一行是一个正整数T，表示测试数据的组数，接下来有T组测试数据。
每组数据包括两行。
第一行有两个正整数N，K（0<N<1000，0<K<=N）,分别表示成绩单上总共的学生数目，和小明的学号。
第二行有N个整数Xi（0<=Xi<=100）分别表示各个学生的成绩，以学号递增顺序给出，第一个学生学号为1。
输出
对于每组数据，请在一行里输出班里一共有多少个学生成绩高于小明。
样例输入
1
3 2
81 72 63
样例输出
1*/

int main(){
    int a[1005];
    int num,no,m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&num,&no);
        for(int i=0;i<num;i++){
            scanf("%d",&a[i]);
        }
        int count=0;
        for(int i=0;i<num;i++){
            if(a[i]>a[no-1]) count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
