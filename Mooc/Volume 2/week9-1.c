#include <stdio.h>
#include <string.h>
int main(void)
{
   char c[100];
   scanf("%s",c);
   for(int i=0;i<strlen(c);++i)
   {
      if(i&&c[i-1]=='n'&&c[i]=='n')continue;
      if(c[i]=='n')putchar('\n');
      else putchar(c[i]);
   }
   if(c[strlen(c)-1]!='n')putchar('\n');
   return 0;
}