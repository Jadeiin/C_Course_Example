#include <stdio.h>
#include <ctype.h>
int main() {
   int flag=1,isnum=0,lines=0,words=0,chars=0;
   char c;
   while((c=getchar())!=EOF)
   {
      if(c=='\n')
	  {
	  	lines++;
	  	if(flag==0&&isnum==0)
		  words++,flag=1;
		  else isnum=0,flag=1;
	  }
      else if(c==' '||c=='\t')
      {
      	if(flag==0&&isnum==0)
		  words++,flag=1;
		  else isnum=0,flag=1;
	  }
      else if(isalpha(c)==0)isnum=1;
      else if(isalpha(c)!=0)flag=0;
      chars++;
   }
   printf("Lines:%d\nWords:%d\nChars:%d\n",lines,words,chars);
   return 0;
}