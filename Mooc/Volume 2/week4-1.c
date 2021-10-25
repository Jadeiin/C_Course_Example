#include <stdio.h>
#include <string.h>
int main() {
   unsigned long x,y;
   char s[10000];
   fgets(s,10000,stdin);
   unsigned long a=strlen(s);
   int flag=0;
   s[a-1]='\0';
   for(x=0,y=strlen(s)-1;x<strlen(s)/2;++x,--y)
   {
      if(s[x]==s[y])flag=0;else flag=1;
   }
   if(flag==0)puts("YES");
   else if(flag==1)puts("NO");
   return 0;
}