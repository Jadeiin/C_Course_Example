#include <stdio.h>
unsigned long long int count=0;
int judge(int a,int b)
{
   if(a==b)
   {
      count++;
      return 0;
   }
   else if(a+1==b)return judge(a+1,b);
   else return judge(a+1,b)+judge(a+2,b);
}
int main() {
   int a,b;
   scanf("%d %d",&a,&b);
   judge(a,b);
   printf("%llu\n",count);
   return 0;
}