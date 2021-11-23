#include <stdio.h>
int g(int a,int b)
{
   int c=a%b;
   if(c==0)return b;
   else return g(b,c);
}
int main() {
   int a,b,temp;
   scanf("%d,%d",&a,&b);
   if(a<b){temp=a;a=b;b=temp;}
   printf("%d\n",g(a,b));
   return 0;
}