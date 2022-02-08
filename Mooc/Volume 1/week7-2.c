#include <stdio.h>
int cal(int x)
{
  int a=x*x,b=x*x,i=0;
  int num[5]={};
  do
  {
      num[i]=a%10;
      a/=10;
      i++;
  }while (a!=0);
  if(b<10)return 1;
  else if(b>100&&b<1000&&num[0]==num[2])return 1;
  else if(b>1000&&b<10000&&num[0]==num[3]&&num[1]==num[2])return 1;
  else if(b>10000&&num[0]==num[4]&&num[1]==num[3])return 1;
  else return 0;
}
int main(void)
{
  int n;
  scanf("%d",&n);
  for(int x=1;x<n;x++) if(cal(x))printf("%d\n",x);
  return 0;
}