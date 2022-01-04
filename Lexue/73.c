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
void deployList(PNODE);

int main ( )
{   int num=1;
	PNODE head;

	head = (PNODE)malloc( sizeof(NODE) );
	head->next = NULL;
	head->data = -1;

	createList(head);// 这是你要完成的函数
	deployList(head);// 这是你要完成的函数
	outlist( head );
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
void deployList(PNODE h)
{
	PNODE he,find=h,yy=h->next;
	int flag=1;
	while(h->next!=yy->next)
	{
		PNODE temp=yy->next;
		if(yy->data%2)
		{
			while(find->next!=NULL)find=find->next;
			find->next=yy;
			yy->next=NULL;
		}
		else if(flag)
		{
			he=yy;
			flag=0;
		}
		yy=temp;
	}
	h->next=he;
}