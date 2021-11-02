#include <stdio.h>
int y,m,d,add;
int next(int y,int m,int d,int add)
{
	
	while(add--)
	{
		if((m==4||m==6||m==9||m==11)&&d==30){m+=1,d=1;continue;}
		else if(m==2)
		{
			if(((y%4==0&&y%100!=0)||y%400==0)&&d==29)
			{
			m+=1,d=1;continue;
			}
			else if(!((y%4==0&&y%100!=0)||y%400==0)&&d==28)
			{
				m+=1,d=1;continue;
			}
			else {++d;continue;}
		}
		else if((m==1||m==3||m==5||m==7||m==8||m==10)&&d==31){m+=1,d=1;continue;}
		else if(m==12&&d==31){y+=1,m=1,d=1;continue;}
		++d;
	}
	printf("%d.%d.%d",y,m,d);
	return 0;
}
int main(void)
{
	extern int y,m,d,add;
	scanf("%d %d %d",&y,&m,&d);
	scanf("%d",&add);
	next(y,m,d,add);
	putchar('\n');
	return 0;
}