// convertion of infix expression into Postfix expression.

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
    char in[50],post[50],ch;
    int i=0,j=0;
    stack *p,q;
    p=&q;
    create(p);
    printf("Enter any Infix Expression:");
    scanf("%s",&in);
    while(in[i]!='\0')
    {
        if(in[i]=='('||in[i]=='+'||in[i]=='-‘||in[i]=='*'||in[i]=='/'||in[i]=='$')
        {
            push(p,in[i]);
        }
        else if(in[i]==')')
        {
            while(p->item[p->top]!='(')
            {
                ch=pop(p);
                if(ch!='(')
                {
                    post[j]=ch;
                    j++;
                }
            }pop(p);
        }
        else
        {
            post[j]=in[i];
            j++;
        }
        i++;
    }//while closing
    if(p->top!=-1)
    {
        while(p->top!=-1)
        {
            ch=pop(p);
            if(ch!='c')
            {
                post[j]=ch;
                j++;
            }
        }
    }
    post[j]='\0';//manual closing
    printf("\nPostfix String=%s",post);
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
        printf("\nStack Ovreflow.");
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
