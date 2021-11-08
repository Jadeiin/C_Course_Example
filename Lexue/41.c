#include <stdio.h>
int main(void)
{
    int i,x=0,y=0,num=0,a[20];
    char c;
    for(i=0;i<14;++i)if((c=getchar())!='\n')a[num++]=(int)(c-'0');
    for(i=0;i<11;i+=2)x+=a[i];
    for(i=1;i<11;i+=2)y+=a[i];
    num=9-(3*x+y-1)%10;
    printf("%d\n",num);
    return 0;
}