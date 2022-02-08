#include <stdio.h>
int main(void)
{
    int a,b,c,d,i,j,k,l;
    static int s[1000];
    scanf("%d %d %d %d",&a,&b,&c,&d);
    for(i=0;i<=5;i++)
        for(j=0;i+j<=5;j++)
            for(k=0;i+j+k<=5;k++)
                for(l=0;i+j+k+l<=5;l++)
                    if(a*i+b*j+c*k+d*l<=1000)
                        s[a*i+b*j+c*k+d*l]++;
    for(i=1;i<=1000;i++)
        if(!s[i])break;
        printf("The max is %d.\n",--i);
        return 0;
}