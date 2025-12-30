#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <process.h>

struct node
{
	int info;
	node *next;
}*list;

node* create();
void isempty();
void push(int);
int pop();
void display();

void main()
{
	int ch,x,z;
	clrscr();
	do
	{
		printf("\n Enter Your Choice=\n");
		printf("\n1:IsEmpty\n");
		printf("\n2:Push\n");
		printf("\n3:Pop\n");
		printf("\n4:Display\n");
		printf("\n5:Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			isempty();
			break;

			case 2:
			printf("\nEnter Push Val= ");
			scanf("%d",&x);
			push(x);
			break;

			case 3:
			z=pop();
			printf("\nPopped Val=%d\n",z);
			break;

			case 4:
			display();
			break;

			case 5:
			exit(0);
		}
	}while(ch!=5);
	getch();
}

node* create()
{
	node *z;
	z=(node*)malloc(sizeof(node));
	return(z);
}

void isempty()
{
	node *p;
	p=list;
	if(p==NULL)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		printf("Stack is Not Empty\n");
	}
}

void push(int x)
{
	node *p,*q;
	p=list;
	if(p==NULL)
	{
		p=create();
		p->info=x;
		p->next=NULL;
		list=p;
	}
	else
	{
		q=create();
		q->info=x;
		q->next=p;
		list=q;
	}
	printf("\nElement Pushed");
}

int pop()
{
	int z;
	node *p;
	p=list;
	if (p==NULL)
	{
		printf("\n Stack Underflow");
	}
	else if(p->next==NULL)
	{
		z=p->info;
		free(p);
		list=NULL;
		return(z);
	}
	else
	{
		z=p->info;
		list=p->next;
		free(p);
		return(z);
	}
}

void display()
{
	node *p;
	p=list;
	while(p!=NULL)
	{
		printf("\n%d",p->info);
		p=p->next;
	}
}

