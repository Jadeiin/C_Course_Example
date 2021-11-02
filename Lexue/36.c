#include <stdio.h>
int main(void)
{
	int h,row,x,col,num;
	scanf("%d %d",&h,&num);
	const int N=num;
	for(row=1;row<=h;++row)
	{
		x=3*h-2;
		if(row==1)
		for(col=1;col<=x;++col)
		{
			if(col!=x)printf("%-2d",num);
			else printf("%d",num);
			if(x%2==1){
			if(col<(x+1)/2)
			{
				if(num==9)num=0;
				else num++;
			}
			else if(col!=x)
			{
				if(num==0)num=9;
				else num--;
			}
			else if(col==x)
			{
				if(num==9)num=0;
				else num++;
			}}
			if(x%2==0){
			if(col<(x+1)/2)
			{
				if(num==9)num=0;
				else num++;
			}
			else if(col>(x+1)/2&&col!=x)
			{
				if(num==0)num=9;
				else num--;
			}
			else if(col==x)
			{
				if(num==9)num=0;
				else num++;
			}}
		}
		else if(row>1&&row<h)
		for(col=1;col<=x-row+1;++col)
		{
			if(col==row)printf("%-2d",num);
			else if(col==x-row+1)
			{
				printf("%d",num);
				if(num==9)num=0;
				else num++;	
			}
			else printf("  ");
		
		}
		else if(row==h)
		{
		col=h-1;
		while(col--)printf("  ");
		for(col=h;col<2*h;++col)
		{
			if(col!=2*h-1)printf("%-2d",num);
			else printf("%d",num);
			if(x%2==1){
			if(col<(x+1)/2)
			{
				if(num==9)num=0;
				else num++;
			}
			else if(col!=x)
			{
				if(num==0)num=9;
				else num--;
			}
			else if(col==x)
			{
				if(num==9)num=0;
				else num++;
			}}
			if(x%2==0){
			if(col<(x+1)/2)
			{
				if(num==9)num=0;
				else num++;
			}
			else if(col>(x+1)/2&&col!=x)
			{
				if(num==0)num=9;
				else num--;
			}
			else if(col==x)
			{
				if(num==9)num=0;
				else num++;
			}}
		}
		}
		putchar('\n'); 
	}
}