#include <stdio.h>
int main(void)
{
	int h,row,x,col;
	char c;
	scanf("%d %c",&h,&c);
	char c1=c,c2=c;
	for(row=0;row<2*h-2;row++)
	{
		if(c2=='z'||c2=='Z')c2-=25;
		else c2++;
	}
	for(row=1;row<=h;++row)
	{
		x=2*h-1;
		for(col=1;col<=2*h-row;++col) 
			{
				if(col==h+(h-row))
					printf("%c",c2);
				else if(col==h-(h-row))
					printf("%c",c1);
				else putchar(' ');
			}
		putchar('\n');
		if(c1=='z'||c1=='Z')c1-=25;
		else c1++;
		if(c2=='a'||c2=='A')c2+=25;
		else c2--;
	}
}