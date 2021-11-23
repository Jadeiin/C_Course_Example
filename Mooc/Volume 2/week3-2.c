#include <stdio.h>
int add(int n,int left,int a[],const int N)
{
   if(n>0) {a[N-n]=left+2;return left+2+add(n-1,2*left+2,a,N);}else return 0;
}
int main() {
   int n=7,sum,left=2;
   const int N=n;
   int a[N];
   sum=add(n,left,a,N)+2;
   printf("sum=%d\n",sum);
   while(n--)printf("sell=%d,",a[n]);
   putchar('\n');
   return 0;
}