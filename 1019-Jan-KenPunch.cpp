#include <stdio.h>

//1019.ʯͷ������
/*��Ŀ����
����������������ʯͷ���Ӳ���Ϸ�������ж����˭Ӯ�ˡ�
��R����ʯͷ��S������ӣ�P������
����
����ĵ�һ����һ������t��0<t<1000������ʾ������������Ŀ��
ÿ�����������ĵ�һ����һ������n��0<n<100������ʾ��Ϸ������
������n�У�ÿ����������ĸ��ɣ�������ĸ֮����һ���ո�ָ�����Щ��ĸֻ����R��S��P��
��һ����ĸ��ʾPlayer1��ѡ�񣬵ڶ�����ĸ��ʾPlayer2��ѡ��
���
����ÿ�����������������ʤ�������֣�Player1��Player2�������ƽ���������TIE��
��������
3
2
R P
S R
3
P P
R S
S R
1
P R
�������
Player 2
TIE
Player 1*/

int VS(char c1,char c2){
    if(c1==c2) return 0;
    if((c1=='R'&&c2=='S')||(c1=='S'&&c2=='P')||(c1=='P'&&c2=='R')) return 1;
    if((c1=='S'&&c2=='R')||(c1=='P'&&c2=='S')||(c1=='R'&&c2=='P')) return -1;
}//1��Ӯ��0ƽ�֣�-1��Ӯ

int main(){
    int t;//������������Ŀ
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;//��Ϸ����
        char c1,c2;//c���տո�
        int vs=0;//ʤ��
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            getchar();
            scanf("%c",&c1);
            getchar();
            scanf("%c",&c2);
            vs+=VS(c1,c2);
        }
        if(vs>0) printf("Player 1\n");
        else if(vs==0) printf("TIE\n");
        else printf("Player 2\n");
    }
    return 0;
}
