#include <stdio.h>
#include <string.h>
int main(void)
{
   char num[100]={};
   int i;
   fgets(num,100,stdin);
   i=strlen(num);
   for(int a=0;a<i-1;a++)
   {
      for(int b=0;b<i-1-a;b++)
      {
         if(num[b]>num[b+1]){
            char temp=num[b];
            num[b]=num[b+1];
            num[b+1]=temp;
         }
      }
   }
   for(int c=i-1;c>=0;c--) putchar(num[c]);
   return 0;
}