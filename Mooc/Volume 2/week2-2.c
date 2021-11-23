#include <stdio.h>
int add(int n)
{
   if(n!=0)return 2*n-1+add(n-1);else return 0;
}
int main() {
   int n;
   scanf("%d",&n);
   printf("%d\n",add(n));
   return 0;
}