#include <stdio.h>

//1016.������Ϣ
/*��Ŀ����
Ϊ���н��ѧ�ѣ�С���ڹ���ѧ����10000Ԫ��1�궨�ڴ������У�����������Ϊ3.7%�����ʰ�����㣬��ʾ100Ԫ��1�����ϢΪ3.7Ԫ��ʵ������ʱ��ǰ��ʱ�Ƴ�ȡ�����ʵ����Ϣ������㣬1�갴365����㣬���Q�����Ϣ�Ǳ���*3.7/100*Q/365��

�ڴ���Q���1�궨����Ϣ����ߡ��������100���1�궨������Ϣ��ߵ�3.9%���罫�����ǰȫȡ�����ٴ�1�궨�ڡ���ôǰ���100��ֻ�ܰ�������Ϣ1.7%���㡣

100�����Ϣ�ͱ���10000��1+1.7/100*100/365)=10046.6
�ٴ�1�궨�ڣ�10046.6(1+3.9/100)=10438.4
�õ�����Ϣ�ӱ���Ϊ10438.4
���������Ϣ����ߣ��ٴ�1�ꡣ�õ�����Ϣ�ӱ���Ϊ�������Ƴ�ȡ�����ʲ��䣩
10000*��1+3.7/100*��100+365��/365)=10471.4
����
���������ж��飬��1��Ϊ����T�������ݵ�������ÿ��ռһ��5������Y��ʾ����ı���<=100000��Q��ʾ�Ѵ�����<=365��e��ʾ�������ʣ�f��ʾ�������ʣ�g��ʾ��ߺ�Ķ������ʡ�
���
ÿ���������2�С�

��1�У���ǰ֧ȡ���ٴ�1�����ñ������Ϣ��
��2�У�������1�꣬Q+365������ñ������Ϣ��

�������1λС����

��������
4
10000 100 2.3 3.7 3.9
10000 100 1.7 3.7 3.9
10000 200 1.7 3.7 3.9
10000 300 1.7 3.7 3.9
�������
10455.5
10471.4
10438.4
10471.4
10486.8
10572.7
10535.2
10674.1*/

int main(){
    int T;
    double Y,Q,e,f,g;
    double res1,res2;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%lf %lf %lf %lf %lf",&Y,&Q,&e,&f,&g);
        e=e/100;
        f=f/100;
        g=g/100;
        res1=(Y+(Y*e*(Q/365)))*(1+g);
        res2=Y+(Y*f*((Q+365)/365));
        printf("%.1f\n%.1f\n",res1,res2);
    }
    return 0;
}