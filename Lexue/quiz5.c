/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

//周青课堂练习：递归判断回文串，是回文串返回Yes，否则返回No
#include <stdio.h>
#include <string.h>

int ispalind(char s[],int left, int right)  //left:开始下标，right：结束下标
{
	if (left!=right&&left<right)return (s[left]==s[right])&&(ispalind(s,left+1,right-1));
	else return 1;
}
int main()
{
	char a[1000];
	int left,right,x,y,max=0,m=0,n=0;
	gets(a);
	left = 0;
	right = strlen(a);
	for(x=0;x<right;++x)
	{
		for(y=x+1;y<right;++y)
		{
			if(y-x>max&&ispalind(a,x,y))
			{
				max=y-x;
				m=x;
				n=y;
			}
		} 
	}
	if(n!=0) 
	while(m!=(n+1))
		printf("%c",a[m++]);
	else printf("No Output");
	putchar('\n');
	return 0;
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */