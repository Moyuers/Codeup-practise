#include <stdio.h>
#include <string.h>

//1010ƽ������
/*��Ŀ����
ÿ�ſεĳɼ���ΪA��B��C��D��F����ȼ���Ϊ�˼���ƽ�����㣬�涨A��B��C��D��F�ֱ����4�֡�3�֡�2�֡�1�֡�0�֡�
����
�ж������������ÿ����������ռһ�У���һ��������д��ĸ��ɣ���ĸ֮���ɿո�ָ���
���
ÿ��������ռһ�С��������Ĵ�д��ĸ���ڼ��ϣ�A,B,C,D,F���У��������Ӧ��ƽ�����㣬���������λС�������������Unknown����
��������
A B C D F
B F F C C A
D C E F
�������
2.00
1.83
Unknown*/

//!�ո�Ҳռһ���ַ���
int main(){
    char a[100];
    double sum,aver;
    int n;
    bool flag;//�ж��������ĸ���޼������
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
