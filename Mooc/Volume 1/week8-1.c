#include <stdio.h>
#include <string.h>
int main(void) 
{
   int i,j;
   char a[5][100]={};
   char temp[100]={};
   for(i=0;i<5;++i) fgets(a[i],100,stdin);
   for(i=0;i<4;++i)
   {
      for(j=0;j<4-i;++j)
      {
         if(strcmp(a[j],a[j+1])>0)
         {
            strcpy(temp,a[j]);
            strcpy(a[j],a[j+1]);
            strcpy(a[j+1],temp);
         }
      }
   }
   for(i=4;i>=0;--i) fputs(a[i],stdout);
   return 0;
}