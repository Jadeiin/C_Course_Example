#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int max=0,min=0,num,res;
    char c,pun;
    while((c=getchar())!='\n')
    {
        if(isdigit(c))
        {
            num=(int)(c-'0');
            if(num>max)max=num;
            if(num<min)min=num;
        }
        if(c=='+')pun=c,res=max+min;
        else if(c=='-')pun=c,res=max-min;
        else if(c=='*')pun=c,res=max*min;
        else if(c=='/')pun=c,res=max/min;
        else if(c=='%')pun=c,res=max%min;
    }
    if(min>0&&max>0)printf("%d %c %d = %d\n",max,pun,min,res);
    else if(min<0&&max>0)printf("%d %c (%d) = %d\n",max,pun,min,res);
    else if(min<0&&max<0)printf("(%d) %c (%d) = %d\n",max,pun,min,res);
    return 0;
}