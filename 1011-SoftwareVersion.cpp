#include <stdio.h>

//1011.����汾
/*��Ŀ����
���Ŵ��һ���й�������������������������ͬ�汾�������һ����˵������İ汾��������������ɣ����汾�ţ�Major Version Number�����Ӱ汾�ţ�Minor Version Number)���޶��ţ�Revision_Number����������������ش���޸�ʱ�����汾�ż�һ���������ԭ�л��������Ӳ��ֹ���ʱ�����汾�Ų��䣬�Ӱ汾�ż�һ����������������˲���bugʱ�����汾�ź��Ӱ汾�Ŷ����䣬�����ż�һ��
�����ǱȽ�����������汾���¾�ʱ�������ȱȽ����汾�ţ������汾����ͬʱ�ٱȽ��Ӱ汾�ţ�ǰ���߶���ͬ��������ٱȽ������š��汾��Խ������Խ�¡�
���ڣ�С�������������ʱ�������������汾������������ĸ��汾����һЩ��
����
����ĵ�һ����һ������T��������T����ԡ���������T����ԡ�
ÿ����Է����У���һ�����������������һ������汾�����汾�ţ��Ӱ汾�ź��޶��š��ڶ���Ҳ��������������ڶ�������汾�����汾�ţ��Ӱ汾�ź��޶��š�
�����г��ֵ���������[0��1000]��Χ֮�ڡ�
���
����ÿ����ԣ������һ������İ汾�µ㣬�����First������ڶ�������İ汾�µ㣬�����Second���������Same��
��������
3
1 1 0
1 1 1
1 1 1
1 1 0
1 1 1
1 1 1
�������
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
