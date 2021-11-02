#include <stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("min=%d",a<b?a:b);
	putchar('\n');
	return 0;
}