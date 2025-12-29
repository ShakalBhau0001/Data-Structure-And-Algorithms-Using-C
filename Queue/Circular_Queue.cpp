#include <stdio.h>
#include <conio.h>
#include <process.h>
#define max 5

struct queue
{
    int item[max];
    int front,rear;
};

void create(queue*);
void isempty(queue*);
void isfull(queue*);
void insert(queue*,int);
int remove(queue*);
void display(queue*);

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

void create (queue *q)
{
    q->front=q->rear=-1;
    printf("Circular Queue is Created...\n");
}

void isempty(queue *q)
{
    if(q->front==-1)
    {
        printf("Circular Queue Is Empty\n");
    }
    else
    {
        printf("Circular Queue Is Not Empty\n");
    }
}

void isfull(queue *q)
{
    if((q->front==0&&q->rear==max-1)||(q->front==q->rear+1))
    {
        printf("Circular Queue Is Full\n");
    }
    else
    {
        printf("Circular Queue Is Not Full\n");
    }
}

void insert(queue *q,int x)
{
    if((q->front==0&&q->rear==max-1)||(q->front==q->rear+1))
    {
        printf("Circular Queue Overflows....\n");
    }
    else
    {
        if(q->front==-1)
        {
            q->front=q->rear=0;
        }
        else
        {
            q->rear=(q->rear+1)%max; // Increment Of #REAR
        }
        q->item[q->rear]=x;
		printf("Element is Pushed\n");
    }
}

int remove(queue *q)
{
    int z;
	if(q->front==-1)
	{
		printf("Circular Queue Underflow\n");
	}
	else
	{
		z=q->item[q->front];
		if(q->front==q->rear)
		{
			q->front=q->rear=-1;
		}
		else
		{
			q->front=(q->front+1)%max; //Increment Of #Front 
		}
		return(z);
	}
}

void display(queue *q)
{
	int i;
	for(i=q->front;i!=q->rear;i=(i+1)%max)
	{
		printf("\t%d",q->item[i]);
	}
	printf("\t%d",q->item[q->rear]);
}

