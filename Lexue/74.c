/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include "stdio.h"
#include "stdlib.h"

struct node
{	int data;
	struct node * next;
} ;

typedef struct node NODE;
typedef struct node * PNODE;
void outlist( PNODE );
void createList(PNODE);
void deployList(PNODE head1,PNODE head2,PNODE head3);

int main ( )
{   int num=1;
	PNODE head1,head2,head3;

	head1 = (PNODE)malloc( sizeof(NODE) );
	head1->next = NULL;
	head1->data = -1;
	
	head2 = (PNODE)malloc( sizeof(NODE) );
	head2->next = NULL;
	head2->data = -1;

    head3 = (PNODE)malloc( sizeof(NODE) );
	head3->next = NULL;
	head3->data = -1;

	createList(head1);// 这是你要完成的函数
	createList(head2);// 这是你要完成的函数
	deployList(head1,head2,head3);// 这是你要完成的函数
	outlist( head3 );
	return 0;
}

void outlist( PNODE head )
{	PNODE p;
	p = head->next;
	while ( p != NULL )
	{	printf("%d\n", p->data);
		p = p->next;
	}
}

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
void createList(PNODE h)
{
	int num=1;
	while ( num!=0 )
	{  	scanf("%d", &num);
		if ( num!=0 )
		{
			PNODE find=h,temp=(PNODE)malloc(sizeof(NODE));
			temp->data=num;
			while(find->next!=NULL)find=find->next;
			find->next=temp;
			temp->next=NULL;
		}
	}
}
void deployList(PNODE head1,PNODE head2,PNODE head3)
{
	int i=1;
//	head3->next=head1->next;
	while(head1->next!=NULL&&head2->next!=NULL)
	{
		PNODE find=head3;
		if(i)
		{
			while(find->next!=NULL)find=find->next;
			PNODE temp=(PNODE)malloc(sizeof(NODE));
			temp->data=head1->next->data;
			find->next=temp;
			temp->next=NULL;
			head1=head1->next;
			i=0;
		}
		else
		{
			while(find->next!=NULL)find=find->next;
			PNODE temp=(PNODE)malloc(sizeof(NODE));
			temp->data=head2->next->data;
			find->next=temp;
			temp->next=NULL;
			head2=head2->next;
			i=1;
		}
	}
	if(head1->next==NULL)
	{
		PNODE find=head3;
		while(find->next!=NULL)find=find->next;
		find->next=head2->next;
	}
	else if(head2->next==NULL)
	{
		PNODE find=head3;
		while(find->next!=NULL)find=find->next;
		find->next=head1->next;
	}
}