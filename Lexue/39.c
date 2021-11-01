#include <stdio.h>
#include <math.h>
int sum=0;
void judge(int n,int depth,int deep)
{
   int add=(depth==1?9:10);
   while(add--)
   {
      if(n%(int)pow(depth,2)==0&&depth==deep)sum++;
      else if(n%(int)pow(depth,2)==0&&depth!=deep)judge(10*n,depth+1,deep);
      n++;
   }
}
int main(void) {
   int num;
   scanf("%d",&num);
   judge(1,1,num);
   printf("%d\n",sum);
   return 0;
}