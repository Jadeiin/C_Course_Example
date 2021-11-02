#include <stdio.h>
int main(void)
{
	int h,row,x,col;
	scanf("%d",&h);
	for(row=1;row<=h;++row)
	{
		x=2*h-1;
		if(row==1)while(x--)putchar('*');
		else for(col=1;col<=2*h-row;++col) if(col==h+(h-row)||col==h-(h-row))putchar('*');else putchar(' ');
		putchar('\n');
	}
}