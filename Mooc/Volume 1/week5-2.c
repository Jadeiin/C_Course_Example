#include <stdio.h>
int main(void)
{
	int a,b,i,w,x,y,z,c;
	for(;scanf("%d %d",&a,&b)==2&&a*b!=0;)
		{
		if(a<1000||a>9999||b<1000||b>9999||a>b) puts("Error");
		else 
		{
		for(c=0,i=a;i<=b;i++)
			 {
			 	if(i%2==1)continue;
			 	w=i/1000;
			 	x=(i%1000)/100;
			 	y=(i%100)/10;
			 	z=i%10;
			 	if(w==x||w==y||w==z||x==y||x==z||y==z)continue;
			 	printf("%d  ",i);
			 	c+=1;
			 }
		printf("\ncounter=%d\n",c);
		}
		}
	return 0;
}