#include <stdio.h>
int main(void)
{
	int s;
	float c;
	scanf("%d %f",&s,&c);
	if(s==1)printf("The Centigrade is %.2f",(c-32)*5/9);
	else printf("The Fahrenheit is %.2f",(c*9/5)+32);
	putchar('\n');
	return 0;
}