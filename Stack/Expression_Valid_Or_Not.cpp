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
    char in[50],ch;
    int i=0,t=0;
    stack *p,q;
    p=&q;
    create(p);
    printf("Enter any Postfix Expression:");
    scanf("%s",&in);
    while(in[i]!='\0')
    {
        if(in[i]=='('||in[i]=='['||in[i]=='{')
        {
            push(p,in[i]);
        }
        else if(in[i]==')'||in[i]==']'||in[i]=='}')
        {
            ch=pop(p);
            if((ch=='(')!=(in[i]==')')||(ch=='[')!=(in[i]==']')||(ch=='{')!=(in[i]=='}'))
            {
                t=1;
                break;
            }
        }
    i++;
    }
    if(p->top!=-1||t==1)
    {
        printf("\nExpression is Invalid.");
    }
    else
    {
        printf("\nExpression is Valid.");
    }
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
        printf("\nStack Overflow");
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
        printf("\nStack Underflow.");
        return(0);
    }
    else
    {
        return(p->item[p->top--]);
    }
}
