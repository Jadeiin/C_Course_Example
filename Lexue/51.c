#include <stdio.h>
int main() {
   int a,b;
   scanf("%d %d",&a,&b);
   int n1[22]={0},n2[22]={0},n3[22]={0};
   n2[0]=1;
   int flag=0;
   for(int i=0;i<b-a;++i)
   {
   	char n4[22]={0};
   	for(int j=0;j<22;++j)
   	{
   		n4[j]+=n1[j]+n2[j];
			n4[j+1]=n4[j]/10;
			n4[j]%=10;
		}
		for(int j=0;j<22;++j) n3[j]=n4[j];
		for(int j=0;j<22;++j) n1[j]=n2[j];
		for(int j=0;j<22;++j) n2[j]=n3[j];
   }
   for(int i=0;i<22;++i)
   {
   	if(!flag&&n3[21-i]==0&&n3[20-i]!=0)flag=1;
   	else if(!flag&&n3[21-i]==0&&n3[20-i]==0)continue;
   	else printf("%d",n3[21-i]);
	}
   putchar('\n');
   return 0;
}