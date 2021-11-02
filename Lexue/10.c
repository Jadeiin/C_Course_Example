#include <stdio.h>
int main(void)
{
	int a,b;
	char c1;
	scanf("%d",&a);
	scanf("%d",&b);
	getchar();
	c1=getchar();
	if(c1=='+')printf("%d\n",a+b);
	else if(c1=='-')printf("%d\n",a-b);
	else if(c1=='*')printf("%d\n",a*b);
	else if(b!=0&&c1=='/') printf("%d\n",a/b);
	else if(b==0&&c1=='/') printf("Go to hell!\n");
	return 0;
}