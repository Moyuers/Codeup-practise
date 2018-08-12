#include <stdio.h>

//1022.挂盐水
/*题目描述
挂盐水的时候，如果滴起来有规律，先是滴一滴，停一下；然后滴二滴，停一下；再滴三滴，停一下...，现在有一个问题：这瓶盐水一共有VUL毫升，每一滴是D毫升，每一滴的速度是一秒（假设最后一滴不到D毫升，则花费的时间也算一秒），停一下的时间也是一秒这瓶水什么时候能挂完呢？
输入
输入数据包含多个测试实例，每个实例占一行，由VUL和D组成，其中 0<D<VUL<5000。
输出
对于每组测试数据，请输出挂完盐水需要的时间，每个实例的输出占一行。
样例输入
10 1
样例输出
13*/

int main(){
    int vul,d;
    while(scanf("%d %d",&vul,&d)!=EOF){
        int time=0,pause=0;
        int i=1;
        time=vul/d;
        if(vul%d!=0) time++;
        while(vul>0){
            vul-=(i*d);
            i++;
            pause++;
        }
        time+=pause;
        time--;
        printf("%d\n",time);
    }
    return 0;
}
