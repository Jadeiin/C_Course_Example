#include <stdio.h>
int judge(int n,int i)
{
   int c=i-(i/1000)*1000,b=i/10-(i/10000)*1000,a=i/100;
   if((a%n==0)&&(b%n==0)&&(c%n==0))return 1;else return 0;
}
int main() {
   int n,i=10000;
   scanf("%d",&n);
   for(;i<=30000;i++)
   {
      if(judge(n,i)) printf("%d\n",i);
   }
   return 0;
}