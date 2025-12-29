#include <stdio.h>
#include <conio.h>
#include <process.h>
#define max 5

struct queue
{
	int item[max];
	int front,rear;
};

void create(queue *);
void isempty(queue *);
void isfull(queue *);
void insert(queue *,int);
int remove(queue *);
void display(queue *);

void main()
{
	int ch,x,z;
	queue *q,p;
	q=&p;
	clrscr();
	do
	{
		printf("\n Enter Your Choice=\n");
		printf("\n1:Create\n");
		printf("\n2:IsEmpty\n");
		printf("\n3:IsFull\n");
		printf("\n4:Insert\n");
		printf("\n5:Remove\n");
		printf("\n6:Display\n");
		printf("\n7:Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			create(q);
			break;

		case 2:
			isempty(q);
			break;

		case 3:
			isfull(q);
			break;

		case 4:
			printf("\n Enter Insert Val=");
			scanf("%d",&x);
			insert(q,x);
			break;

		case 5:
			z=remove(q);
			printf("\nRemoved Value=%d",z);
			break;

		case 6:
			display(q);
			break;

		case 7:
			exit(1);
		}
	}while(ch!=7);
	getch();
}

void create(queue *q)
{
	q->front=-1;
	q->rear=-1;
	printf("\n Queue Is Created\n");
}

void isempty(queue *q)
{
	if(q->front==q->rear)
	{
		printf("\n Queue Is Empty\n");
	}
	else
	{
		printf("\n Queue Is Not Empty\n");
	}
}

void isfull(queue *q)
{
	if(q->rear==max-1)
	{
		printf("\n Queue Is Full\n");
	}
	else
	{
		printf("\n Queue Is Not Full\n");
	}
}

void insert(queue *q,int x)
{
	if(q->rear==max-1)
	{
		printf("\n Queue Overflow... \n");
	}
	else
	{
		++q->rear;
		q->item[q->rear]=x;
		printf("\nElement Is Inserted\n");
	}
}

int remove(queue *q)
{
	if(q->front==q->rear)
	{
		printf("\nQueue Underflow...\n");
		return(0);
	}
	else
	{
		++q->front;
		return(q->item[q->front]);
	}
}

void display(queue *q)
{
	int i;
	for (i=q->front+1;i<=q->rear;i++)
	{
		printf("\t%d",q->item[i]);
	}
}
