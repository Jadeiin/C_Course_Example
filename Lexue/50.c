#include <stdio.h>
#include <string.h>
#include <ctype.h>
char ch[10000][80];
int x=0,y=0;
void judge(char word[])
{
	int find=0;
	for(int i=0;i<x;++i)
		if(!strcmp(word,ch[i]))
			{find=1,printf("%d",i+1);break;}
	if(!find)x++,printf("%s",word);
}
int main(void)
{
	int flag;
	char c;
	while((c=getchar())!=EOF)
	{
		if(isalpha(c))flag=0,ch[x][y++]=c;
		else
		{
			if(!flag)ch[x][y]='\0',y=0,judge(ch[x]);
			printf("%c",c);
			flag=1;
		}
	}
	return 0;
}