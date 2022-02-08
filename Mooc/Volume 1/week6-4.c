#include <stdio.h>
int main(void)
{
   int T,N,i,x,num,max=-1001,l,sum;
   scanf("%d",&T);
   for(i=0;i<T;++i)
   {
      l=sum=0;
      scanf("%d",&N);
      for(x=0;x<N;++x)
      {
         scanf("%d",&num);
         if(max<num)max=num;
         if(l+num>0)l+=num;
         else l=0;
         if(sum<l)sum=l;
      }
      if(max<0)printf("%d\n",max);
      else printf("%d\n",sum);
   }
   return 0;
}