#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int max=0,min=0,num=0,res,flag=0,flag2=0,flag3=0;
    char c,pun;
    while((c=getchar())!='\n')
    {
        if(isdigit(c)&&flag==0)
        {
        	num*=10;
            num+=(int)(c-'0');
        }
        else if(isdigit(c)&&flag==1)
        {
        	num*=10;
            num-=(int)(c-'0');
            flag2=0;
        }
        if(c==','&&flag3==1)
        {
            if(flag2==1){pun='-';break;}
        	if(num>max)max=num;
            if(num<min)min=num;
            num=0;
            flag=0;
		}
		else if(c==','&&flag3==0)
		{
			max=num;
			min=num;
            num=0;
            if(flag2==1)pun='-';
            flag=0;
            flag3=1;
		}
        if(c=='+'){pun=c;break;}
        else if(c=='-')flag=1,flag2=1;
        else if(c=='*'){pun=c;break;}
        else if(c=='/'){pun=c;break;}
        else if(c=='%'){pun=c;break;}
    }
    if(pun=='+')res=max+min;
    else if(pun=='-')res=max-min;
    else if(pun=='*')res=max*min;
    else if(pun=='/')res=max/min;
    else if(pun=='%')res=max%min;
    if(pun=='+'||pun=='-'||pun=='*'||pun=='/'||pun=='%'){if(min>0)printf("%d %c %d = %d\n",max,pun,min,res);
    else if(max<0)printf("(%d) %c (%d) = %d\n",max,pun,min,res);
    else printf("%d %c (%d) = %d\n",max,pun,min,res);}
    return 0;
}