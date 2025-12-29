#include <stdio.h>
#include <conio.h>
#include <process.h>
#define max 5

struct ord
{
    int item[max];
    int left,right;
};

void create(ord*);
void ins_right(ord*,int);
void ins_left(ord*,int);
int remove(ord*);
void display(ord*);

void main()
{
    int ch,x,z;
    ird *p,q;
    p=&q;
    clrscr();
    do
    {
        printf("\n Enter Your Choice=\n"):
		printf("\n1:Create\n");
		printf("\n2:Insert Right\n");
		printf("\n3:Insert Left\n");
		printf("\n4:Remove\n");
		printf("\n5:Display\n");
		printf("\n6:Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                create(p);
                break;

            case 2:
                printf("\nEnter Insert Val=\n");
                scanf("%d",&x);
                ins_right(p,x);
                break;
            
            case 3:
                printf("\nEnter Insert Val=\n");
                scanf("%d",&x);
                ins_left(p,x);
                break;

            case 4:
                z=remove(p);
                printf("\nRemoved Value=%d\n",z);
                break;

            case 5:
                display(p);
                break;
            
            case 6:
                exit(1)
        }
    }while(ch!=6);
    getch();
}

void create(ord *p)
{
    p->left=p->right=-1;
    printf("\nORD is Created\n");
}

void ins_right(ord *p,int x)
{
 if(p->right==max-1)
 {
    printf("\nORD Overflow\n");
 }
 else
 {
    ++p->right;
    p->item[p->right]=x; 
 }
 printf("\n Element Is Inserted\n");
}

void ins_left(ord *p,int x)
{
    int i;
    if(p->right==max-1)
    {
    printf("\nORD Overflow\n");
    }
    else
    {
        for(i=p->right+1;i>=p->left+2;i--)
        {
            p->item[i]=p->item[i-1];
        }
        p->item[p->left+1]=x;
        ++p->right;
    }
    printf("\nElement is inserted\n");
}

int remove(ord *p)
{
    int z;
    if(p->left==p->right)
    {
        printf("\n ORD Underflow \n");
        return(0);
    }
    else
    {
        ++p->left;
        return(p->item[p->left]);
    }
}

void display(ord *p)
{
    int i;
    for(i=p->left+1;i<=p->right;i++)
    {
        printf("\t%d",p->item[i]);
    }
}
