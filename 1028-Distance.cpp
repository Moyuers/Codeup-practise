#include <stdio.h>
#include <string.h>

//1028.行车路程

int main(){
    int h,m,s,l;
    char c[20];
    int time=0,now=0;
    double v=0,d=0;
    while(gets(c)){
        h=(c[0]-'0')*10+c[1];
        m=(c[3]-'0')*10+c[4];
        s=(c[6]-'0')*10+c[7];
        now=h*3600+m*60+s;
        l=strlen(c);
        if(l==8){
            d+=(now-time)*v;
            time=now;
            printf("%s %.2lf km\n",c,d/1000);
        }else{
            d+=(now-time)*v;
            time=now;
            v=c[9]-'0';
            for(int i=10;i<l;i++){
                v=v*10+(c[i]-'0');
            }
            v/=3.6;
        }
    }
    return 0;
}
