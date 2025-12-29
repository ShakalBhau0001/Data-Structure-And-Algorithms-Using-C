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
    char post[50];
    int i=0,op1,op2,z,val;
    stack *p,q;
    p=&q;
    create(p);
    printf("Enter any Postfix Expression:");
    scanf("%s",&post);
    while(post[i]!='\0')
    {
        if(post[i]=='+'||post[i]=='-'||post[i]=='*'||post[i]=='/'||post[i]=='$')
        {
            op2=pop(p);
            op1=pop(p);
            switch(post[i])
            {
                case '+':
                    val=op1+op2;
                    push(p,val);
                    break;
                case '-':
                    val=op1-op2;
                    push(p,val);
                    break;
                case '*':
                    val=op1*op2;
                    push(p,val);
                    break;
                case '/':
                    val=op1/op2;
                    push(p,val);
                    break;
                case '$':
                    val=pow(op1,op2);
                    push(p,val);
                    break;
            }
        }
        else
        {
            push(p,post[i]-48);
        }
        i++;
    }
    z=pop(p);
    printf("\nValue of Postix Expression=%d",z);
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
