#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,row,col;
	scanf("%d",&n);
	for(row=1;row<=2*n-1;row++)
	{
		for(col=1;col<=(row>n?3*n-1-row:row+n-1);col++)
		{
				if((abs(row-col)+1)>n||row+col<=n)putchar(' '),putchar(' ');
				else printf("%-2d",abs(row-n)+abs(col-n)+1);
		}
		putchar('\n');
	}
	return 0;
}