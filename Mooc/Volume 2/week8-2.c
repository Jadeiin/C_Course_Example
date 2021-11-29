#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
struct alpha
{
	char c;
	struct alpha *link;
};
typedef struct alpha A;
void reverse(A *p)
{
	if(p->link!=NULL)
	{
		reverse(p->link);
		printf(" %c",p->c);
	}
	else printf("%c",p->c);
}
int main(void)
{
	A *head_1=(A*)malloc(sizeof(A));
	A *head_2=(A*)malloc(sizeof(A));
	head_1->link=NULL;
	head_2->link=NULL;
	A *temp,*p;
	char a;
	while((a=getchar())!='\n')
	{
		if(a==' ')continue;
		else if(isalpha(a))
		{
			temp=(A*)malloc(sizeof(A));
			temp->c=a;
			temp->link=head_1->link;
			head_1->link=temp;
		}
	}
	while((a=getchar())!='\n')
	{
		if(a==' ')continue;
		else if(isalpha(a))
		{
			temp=(A*)malloc(sizeof(A));
			temp->c=a;
			temp->link=head_2->link;
			head_2->link=temp;
		}
	}
	if(head_2->link->c<head_1->link->c)
	{
		temp=head_2->link;
		p=head_1->link;
	}
	else
	{
		temp=head_1->link;
		p=head_2->link;	
	}
	while(temp!=NULL&&p!=NULL)
	{
		if(temp->c==p->c)
			temp=temp->link;
		else if(temp->c<p->c&&p->link==NULL)
		{
			p->link=temp;
			p=temp;
			temp=temp->link;
		}
		else if(temp->c<p->c&&temp->c>(p->link)->c)
		{
			A *q=temp->link;
			temp->link=p->link;
			p->link=temp;
			p=temp;
			temp=q;
		}
		else p=p->link;
	}
	p=head_1->link->c<head_2->link->c?head_2->link:head_1->link;
//	while(p!=NULL)
//	{	
////		printf("%c",p->c);
//		putchar(p->c);
//		p=p->link;
//	}
	reverse(p);
	putchar('\n');
	return 0;
}