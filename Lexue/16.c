#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int delta=b*b-4*a*c;
	float Delta=delta<0?sqrt(-delta):sqrt(delta);
	if(!a&&!b)
		printf("Input error!");
	else if(!a)
		printf("x=%.6lf",(double)-c/b);
	else if(!delta)
		printf("x1=x2=%.6lf",(double)-b/2/a);
	else if(delta>0)
		printf("x1=%.6lf\nx2=%.6lf",(-b+Delta)/2/a,(-b-Delta)/2/a);
	else if(!b)
		printf("x1=%.6lfi\nx2=%.6lfi",(Delta)/2/a,(-Delta)/2/a);
	else printf("x1=%.6lf+%.6lfi\nx2=%.6lf-%fi",(double)-b/2/a,Delta/2/a,(double)-b/2/a,Delta/2/a);
	putchar('\n');
	return 0;
}