#include <string.h>
#include <stdio.h>
int judge(char ch[])
{
   int length=strlen(ch);
   int x,y;
   //if(ch[length-1]=='\n')ch[length-1]='\0',length--;
   for(x=0;x<length;++x)
   {
      if((ch[x+1]-ch[x])<0)return 1;
   }
   return 0;
}
int check(char ch[])
{
   while(ch[])
}
int main() {
   int N,i;
   char c;
   char ch[11];
   scanf("%d",&N);
   for(i=0;i<N;++i)
   {
      gets(ch);
      if(judge(ch))printf("0\n");
      else printf("%d",check(ch));
   }
   return 0;
}