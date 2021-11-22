#include <stdio.h>
#include <string.h>
#include <ctype.h>
void tab(int n)
{
  while(n--)
    printf("    ");
}
int main(void)
{
  char ch[1000];
  int i=0,flag=0,end=0,num_tab=0,deed=0,flag_for=0,flag_func=0,flag_jian=0;
  while(!end)
  {
    while((ch[i++]=getchar())!='\n');
    for(int j=0;j<i;++j)
    {
      if(flag_jian==1)
      {
      	if(!(isalpha(ch[j])||ch[j]=='.'||ch[j]=='>'))
      	 	flag_jian==0;
	    }
      if(ch[j]=='>')
      {
        putchar('>');
        if(flag_jian)
          flag_jian=0,putchar('\n');
      }
      else if(ch[j]=='<')
      	putchar('<'),flag_jian=1;
      else if(ch[j]=='{')
      {
      	if(flag_func)
          putchar('\n'),flag_func=0;
        if(num_tab>0)
          tab(1);
        putchar('{');
        putchar('\n');
        tab(num_tab++);
        deed=1;
      }
      else if(ch[j]=='}')
      {
        if(flag_func)
          flag_func=0;
        putchar('}');
        putchar('\n');
        if(num_tab>1)
          tab(--num_tab-1);
        else tab(--num_tab);
          deed=1;
        if(num_tab==0&&flag)
          end=1;
      }
      else if(ch[j]==';')
      {
        putchar(';');
        if(!flag_for)
        {
          putchar('\n');
          if(num_tab>0)
            tab(num_tab-1);
        }
        if(num_tab>=1)deed=1;
      }
      else if(ch[j]==')')
      {
        putchar(')');
        if(flag_for)
        {
          putchar('\n');
            tab(num_tab-1);
            flag_for=0;
        }
        else if(&ch[j]==strstr(ch,"main()")+5)
        {
          putchar('\n');
          flag=1;
          deed=1;
        }
        else if(ch[j+1]!=';')
          flag_func=1;
      }
      else if(ch[j]!='\n') //if(ch[j]!=' '&&ch[j]!='\n') 
      {
        if(deed&&!flag_for)
          tab(1),deed=0;
        printf("%c",ch[j]);
      }
      if(ch[j]=='f'&&ch[j+1]=='o'&&ch[j+2]=='r')
         flag_for=1;
      if(num_tab==0)deed=0;
    }
    i=0;
	}
  return 0;
}