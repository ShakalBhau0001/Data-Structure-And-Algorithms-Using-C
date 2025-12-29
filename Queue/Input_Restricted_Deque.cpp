#include <stdio.h>
#include <conio.h>
#include <process.h>
#define max 5

struct ird
{
    int item[max];
    int left,right;
};

void create(ird*);
void insert(ird*,int);
int rem_left(ird*);
int rem_right(ird*);
void display(ird*);
void main()
{
    int ch,x,z;
    ird *q,p;
    q=&p;
    clrscr();
    do
    {
        printf("\n Enter Your Choice=\n");
		printf("\n1:Create\n");
		printf("\n2:Insert\n");
		printf("\n3:Remove Left\n");
		printf("\n4:Remove Right\n");
		printf("\n5:Display\n");
		printf("\n6:Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                create(q);
                break;

            case 2:
                printf("\n Enter Ins Val=\n");
                scanf("%d",&x);
                insert(q,x);
                break;

            case 3:
                z=rem_left(q);
                printf("\nRemoved Value=%d\n",z);
			          break;

            case 4:
                z=rem_right(q);
                printf("\nRemoved Value=%d\n",z);
                break;

            case 5:
                display(q);
                break;

            case 6:
                exit(1);
        }	
    }while(ch!=6);
    getch();
}

void create(ird *q)
{
    q->left=q->right=-1;
    printf("\nIRD is Created\n");
}

void insert(ird *q,int x)
{
    if(q->right==max-1)
    {
        printf("\nIRD Overflows\n");
    }
    else
    {
        ++q->right;
        q->item[q->right]=x;
    }
    printf("\n Element Is Inserted\n");
}

int rem_left(ird *q)
{
    if(q->left==q->right)
    {
        printf("\nIRD Underflows\n");
        return(0);
    }
    else
    {
        ++q->left;
        return(q->item[q->left]);
    }
}

int rem_right(ird *q)
{
    if(q->left==q->right)
    {
        printf("\nIRD Underflows\n");
        return(0);
    }
    else
    {
        return(q->item[q->right--]);
    }
}

void display(ird *q)
{
	int i;
	for(i=q->left+1;i<=q->right;i++)
	 {
		printf("\t%d",q->item[i]);
	 }
}
