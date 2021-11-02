#include <stdio.h>
#include <string.h>
int main(void)
{
	char ch[60]={'0'};
	char newch[60]={'0'};
	int num=0,index;
	char c;
	while((c=getchar())!=' ')
	{
		ch[num]=c;
		num++;
	}
	scanf("%c %d",&c,&index);
	char *point=strchr(ch,'.');
	char *minus=strchr(ch,'-');
	if(point==NULL)
	{
		num=strlen(ch);
		ch[num]='.';
		ch[num+1]='0';
		point=strchr(ch,'.');
	}
	int length=point-ch;
	if(index<0)
	{
		if(minus==NULL)printf("0.");else printf("-0.");
		int x,y,i=-index-1;
		if(i<8){
		while(i--)putchar('0');
		int count=8+index+1;
		for(x=(minus==NULL?0:1),y=0;y<count&&x<strlen(ch);++x)if(ch[x]!='.'&&ch[x]!='\0')++y,printf("%c",ch[x]);
		i=9+index-y;
		while(i--)putchar('0');
		putchar('\n');}
		else {i=8;while(i--)putchar('0');putchar('\n');}
	}
	else
	{
		int no=strlen(ch);
		int count=index;
		while(count--)
		{
			ch[no++]='0';
		}
		ch[no]='\0';
		int i=index;
		count=8;
		while(i--) ch[length+index-i-1]=ch[length+index-i];
		ch[length+index]='.';
		ch[length+index+9]='\0';
		while(count){
		if(ch[length+index+count]=='\0')ch[length+index+count]='0';count--;}
		puts(ch);
	}
	return 0;
}