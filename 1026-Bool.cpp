#include <stdio.h>

//1026.��������
/*��Ŀ����
һ������������һ����ż�ԣ����þ��������к������еĺͶ���ż����������4��4�ľ���;�����ż�ԣ�
1 0 1 0
0 0 0 0
1 1 1 1
0 1 0 1
�������еĺ���2��0��4��2���������еĺ���2��2��2��2��
�������дһ�����򣬶���������󲢼�����Ƿ������ż�ԡ����û�У���ĳ���Ӧ���ټ��һ�����Ƿ����ͨ���޸�һλ����0�޸�Ϊ1����1�޸�Ϊ0����ʹ��������ż�ԡ���������ܣ��������ͱ���Ϊ���ƻ��ˡ�
����
�����������������ݡ�ÿ��������ݵĵ�һ����һ������n��1<=n<=100���������þ���Ĵ�С���ڽ����������У�ÿ����n����������������0��1���ɵġ�n=0ʱ�����������
���
����ÿ�����룬���������������ż�ԣ��������OK���������ż����ͨ��ֻ�޸ĸþ����е�һλ����������ô�����Change bit (i,j)��������i��j�Ǳ��޸ĵ���λ���кź��кš����������Corrupt����
��������
4
1 0 1 0
0 0 0 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 0 1 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 1 1 0
1 1 1 1
0 1 0 1
0
�������
OK
Change bit (2,3)
Corrupt*/

int main(){
    int a[105][105]={0};
    int n;
    while(scanf("%d",&n)!=EOF&&n!=0){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        int row_odd=0,col_odd=0;
        int row,col;
        for(int i=1;i<=n;i++){
            int sum=0;
            for(int j=1;j<=n;j++){
                sum+=a[i][j];
            }
            if(sum%2!=0) row_odd++,row=i;
        }
        for(int j=1;j<=n;j++){
            int sum=0;
            for(int i=1;i<=n;i++){
                sum+=a[i][j];
            }
            if(sum%2!=0) col_odd++,col=j;
        }
        if(row_odd==0&&col_odd==0) printf("OK\n");
        else if(row_odd=1&&col_odd==1) printf("Change bit (%d,%d)\n",row,col);
        else printf("Corrupt\n");
    }
    return 0;
}