#include <stdio.h>
int main(void)
{
	int a,b;
	scanf("%d",&a);
	for(b=1;(1+b)*b/2<a;b++);
	printf("%d",b);
	return 0;
}