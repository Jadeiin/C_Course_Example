#include <stdio.h>
int g(int a,int b)
{
   int c=a%b;
   if(c==0)return b;
   else return g(b,c);
}
int main(void)
{
   int a,b;
   scanf("%d %d",&a,&b);
   if(a<b){int temp=a;a=b;b=temp;}
   printf("%d\n",g(a,b));
   return 0;
}