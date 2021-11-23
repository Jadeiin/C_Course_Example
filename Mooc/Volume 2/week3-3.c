#include <stdio.h>
#include <string.h>
int add(char a[],int length)
{
   if(length>0)return add(a+1,length-1)+(int)(a[0]-'0');else return 0;
}
int main() {
   char a[]={};
   scanf("%s",a);
   int length=strlen(a);
   printf("%d\n",add(a,length));
   return 0;
}