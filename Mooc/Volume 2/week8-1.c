#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
struct alpha
{
	char c;
	struct alpha *link;
};
int main(void)
{
	int i;
	char ch[7]="abcdcba";
	typedef struct alpha A;
	A *head;
	A *end=(A*)malloc(sizeof(A));
	A *temp;
	end->link=NULL;
	head=end;
	for(i=0;i<7;++i)
	{
		temp=(A*)malloc(sizeof(A));
		temp->c=ch[i];
		temp->link=head->link;
		head->link=temp;
	}
	char a;
	scanf("%c",&a);
	if(isalpha(a))
	{
		i=0;
		temp=head;
		while(temp->c!=a)
			temp=temp->link,++i;
		if(temp)
			printf("%d\n",7-i);
		else printf("N\n");
	}
	else if(isdigit(a))
	{
		i=(int)a-'0';
		if(i>6||i<0)
			printf("N\n");
		else 
		{
			while(i--)
			temp=temp->link;
		printf("%c\n",temp->c);
		}
	}
	return 0;
}