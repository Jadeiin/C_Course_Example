#include <stdio.h>
#include <string.h>
int main(void)
{
	char ch[6]={'\0'};
	while(1)
	{
		for(int i=0;i<5;++i)
		{
			ch[i]=getchar();
			if(ch[i]==' '||ch[i]=='\n')
			{
				ch[i]='\0';
				break;
			}
		}
		if(ch[0]=='0')break;
		if(ch[0]=='\0')continue;
		if(strlen(ch)<5)
		{
			int j=5-strlen(ch);
			while(j--)
				printf("7D ");
		}
		for(int i=0;i<strlen(ch);++i)
		{
			if(ch[i]=='0') printf("7D");
			else if(ch[i]=='1')printf("50");
			else if(ch[i]=='2')printf("37");
			else if(ch[i]=='3')printf("57");
			else if(ch[i]=='4')printf("5A");
			else if(ch[i]=='5')printf("4F");
			else if(ch[i]=='6')printf("6F");
			else if(ch[i]=='7')printf("54");
			else if(ch[i]=='8')printf("7F");
			else if(ch[i]=='9')printf("5F");
			if(strlen(ch)!=i+1)putchar(' ');
		}
		putchar('\n');
	}
	return 0;
}