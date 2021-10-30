// Created on Poesty’s iPad.

#include <stdio.h>
#include <math.h>
int main() {
   int n,count,k,sum=0;
   register int i;
   scanf("%d",&n);
   for(i=pow(10,n-1);i<pow(10,n);++i)
   {
      for(count=0,k=1;k<=n;++k)
      {
         if((i/(int)pow(10,n-k))%(int)pow(k,2)==0)count++;
      }
      if(count==n)sum++;
   }
   printf("%d\n",sum);
   return 0;
}