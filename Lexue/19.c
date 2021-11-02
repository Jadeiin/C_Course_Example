#include <stdio.h>
int main(void)
{
	double r,h,pai=3.1415926;
	scanf("%lf\n%lf",&r,&h);
	printf("s=%.2lf,v=%.2lf",2*pai*r*h,pai*r*r*h);
	putchar('\n');
	return 0;
}