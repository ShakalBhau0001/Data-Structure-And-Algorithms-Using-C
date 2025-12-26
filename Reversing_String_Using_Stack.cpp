#include<stdio.h>
#include<conio.h>
#define max 50

struct stack
{
    int item[max];
    int top;
};

void create(stack *);
void push(stack *,int);
int pop(stack *);

void main()
{
    clrscr();
    char str[50],rev[50];
    int i=0,j=0;
    stack *p,q;
    p=&q; //initilizing of pointer.
    create(p);//stack create.
    printf("\nEnter any String:");
    scanf("%s",&str);
    while(str[i]!='\0')
    {
        push(p,str[i]);
        i++;
    }
    while(p->top!=-1)
    {
        rev[j]=pop(p);
        j++;
    }
    rev[j]='\0';//manual end
    printf("\nReversed String=%s",rev);
    getch();
}

void create(stack *p)
{
    p->top=-1;
}

void push(stack *p,int x)
{
    if(p->top==max-1)
    {
        printf("\nStack Overflow.");
    }
    else
    {
        ++p->top;
        p->item[p->top]=x;
    }
}

int pop(stack *p)
{
    if(p->top==-1)
    {
        printf("\nStack Underflow");
        return(0);
    }
    else
    {
        return(p->item[p->top--]);
    }
}
