#include <stdio.h>

/*��Ŀ����
��������Ǽ������������ĺ͡�

����
ÿ�еĵ�һ����N����ʾ���к�����N������

���
����ÿһ��������Ҫ����Ӧ��������͡�

��������
4 1 2 3 4
5 1 2 3 4 5
�������
10
15*/

int main(){
    int n,a,sum;
    while(scanf("%d",&n)!=EOF){
        sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum);
    }
    return 0;
}
