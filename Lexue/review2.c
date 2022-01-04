#include <stdio.h>
int main(void)
{
	int n,n1,n2,n3,n12,n23,n31;
	scanf("%d %d %d %d %d %d %d",&n,&n1,&n2,&n3,&n12,&n23,&n31);
	printf("%d\n",n-n1-n2-n3+n12+n23+n31);
	return 0;
}