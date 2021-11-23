#include <stdio.h>
int fun1(int a,int b)
{
   int i;
   for(i=(a>b?b:a);i>0;i--)if(a%i==0&&b%i==0)break;
   return i;
}
int fun2(int a,int b)
{
   return (a/fun1(a,b)*b);
}
int main() {
   int a,b;
   scanf("%d,%d",&a,&b);
   printf("最大公约数：%d\n最小公倍数：%d\n",fun1(a,b),fun2(a,b));
   return 0;
}