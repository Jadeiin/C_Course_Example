#include <stdio.h>
int main(void)
{
	int x,y,z,n;
	scanf("%d",&n);
	if(n%8!=0)puts("No Change.");
	else printf("%d,%d,%d\n",25*n/4,15*n/2,45*n/8);
	return 0;
}