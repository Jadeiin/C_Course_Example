#include <stdio.h>
int main(void)
{
	int ch,n,row,col,x;
	scanf("%c %d",&ch,&n);
	for(row=1;row<=2*n-1;row++)
	{
		for(col=1;col<=(row>n?3*n-1-row:row+n-1);col++)
		{
			if(row<=n)
			{
				if(col==n+(row-1)||col==n-(row-1)) putchar(ch);else putchar(' ');
			}
			else {
				x=2*n-row;
				if(col==n+(x-1)||col==n-(x-1)) putchar(ch);else putchar(' ');
			}
		}
		if(row<n)ch+=1;
		else ch-=1;
		putchar('\n');
	}
	return 0;
}