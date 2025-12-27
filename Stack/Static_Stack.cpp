#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 5

struct stack
{
    int item[max];
    int top;
};

void create(stack *);
void isempty(stack *);
void isfull(stack *);
void push(stack *,int);
int pop(stack *);
void display(stack *);

void main()
{
    int ch,x,z;
    stack *p;
    stack q;
    p=&q;//Intger of pointer
    clrscr();
    do
    {
        printf("\nEnter your choise:");
        printf("\n1:Create\n2:Isempty\n3:Isfull\n4:Push\n5:Pop\n6:Display\n7:Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                create(p);
                break;
            case 2:
                isempty(p);
                break;
            case 3:
                isfull(p);
                break;
            case 4:
                printf("\nEnter value to push=");
                scanf("%d",&x);
                push(p,x);
                break;
            case 5:
                z=pop(p);
                printf("\npoped value is=%d",z);
                break;
            case 6:
                display(p);
                break;
            case 7:
                exit(1);
        }
    }while(ch!=7);
    getch();
}

void create(stack *p)
{
    p->top=-1;
    printf("\nStack is Created.\n");
}

void isempty(stack *p)
{
    if(p->top==-1)
    {
        printf("\nStack is Empty.\n");
    }
    else
    {
        printf("\nStack is Not Empty.\n");
    }
}

void isfull(stack *p)
{
    if(p->top == max-1)
    {
        printf("\nStack is Full.\n");
    }
    else
    {
        printf("\nStack is Not Full\n");
    }
}

void push(stack *p,int x)
{
    if(p->top == max-1)
    {
        printf("\nStack is Overflow.\n");
    }
    else
    {
        ++p->top;
        p->item[p->top]=x;
        printf("%d is pushed\n",x);
    }
}

int pop(stack *p)
{
    if(p->top == -1)
    {
        printf("\nStack is Underflow.\n");
        return(0);
    }
    else
    {
        return(p->item[p->top--]);
    }
}

void display(stack *p)
{
    int i;
    for(i=p->top;i>=0;i--)
    {
        printf("\n%d",p->item[i]);
    }
}
