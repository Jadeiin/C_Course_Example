/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{   int         data;
    struct node * next;
} NODE;

NODE * find( NODE * , int * );
void outputring( NODE * );
void change( int , int , NODE * );

void outputring( NODE * pring )
{	NODE * p;
	p = pring;
	if ( p == NULL )
		printf("NULL");
	else
		do
		{	printf("%d", p->data);
			p = p->next;
		} while ( p != pring );
	printf("\n");
	return;

}

int main()
{   int n, m;
	NODE * head, * pring;

	scanf("%d%d", &n, &m);
	head = (NODE *)malloc( sizeof(NODE) );
	head->next = NULL;
	head->data = -1;

	change( n, m, head );
	pring = find( head, &n );
	printf("ring=%d\n", n);
	outputring( pring );

	return 0;
}

/* Here is waiting for you.
void change( int n, int m, NODE * head )
{ 
}

NODE * find( NODE * head, int * n )
{
}
*/

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */

void change( int n, int m, NODE * head )
{
	 int f=n,l=m,i=0,flag=0;
	 int tmp[m][2];
	 while(1)
	 {
	 	f*=10;
	 	for(int x=0;x<i;++x)
	 		if(tmp[x][0]==f/l&&tmp[x][1]==f%l)
	 			flag=x+1;
	 	if(flag)break;
	 	NODE *findp=head,*p=malloc(sizeof(NODE));
	 	p->data=f/l;
	 	tmp[i][0]=f/l;
		while(findp->next!=NULL)findp=findp->next;
		findp->next=p;
		p->next=NULL;	
	 	if(!(f%l)) break;
	 	else tmp[i++][1]=f%l,f%=l;
	 }
	 if(flag)
	 {
	 	NODE *findp=head,*last=head;
	 	while(last->next!=NULL)
	 		last=last->next;
	 	while(flag--)
	 		findp=findp->next;
	 	last->next=findp;
	 }
}
NODE * find( NODE * head, int * n )
{
	NODE *p=head,*q=head;
	while(p!=NULL&&q!=NULL)
	{
		p=p->next;
		q=q->next;
		if(q!=NULL)q=q->next;
		if(p==q)break;
	}
	if(q==NULL)
	{
		*n=0;
		return NULL;
	}
	int length=1;
	while(q->next!=p)
	{
		q=q->next;
		length++;
	}
	int count = 0;
    q = p = head->next;
    while (count < length)
    {
        count++;
        p = p->next;
    }
    while (p != q)
    {
	    p = p->next;
	    q = q->next;
	}
	*n=length;
	return p;
}