#include <stdio.h>

int main() {
   int i=1,n,add=0;
   scanf("%d",&n);
   for(;(i!=1&&add!=0)||(i==1&&add==0);add++)
   {if(i<=n)i*=2;
   else i=(i-n)*2-1;}
   printf("%d\n",add);
   return 0;
}