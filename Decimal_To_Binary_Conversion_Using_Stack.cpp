#include <stdio.h>
#include <conio.h>
#define max 50

struct stack 
{
    int item[max];
    int top;
};

void create(stack *);
void push(stack *, int);
int pop(stack *);
void Binary(stack *, int);

void main() 
{
    clrscr();
    int dec;
    stack *p, q;
    p = &q; // initializing pointer
    create(p); // stack creation
    
    printf("\nEnter a decimal number: ");
    scanf("%d", &dec);

    printf("\nBinary equivalent: ");
    Binary(p, dec);
    
    getch();
}

void create(stack *p) 
{
    p->top = -1;
}

void push(stack *p, int x) 
{
    if (p->top == max - 1) 
    {
        printf("\nStack Overflow.");
    } 
    else 
    {
        ++p->top;
        p->item[p->top] = x;
    }
}

int pop(stack *p) 
{
    if (p->top == -1) 
    {
        printf("\nStack Underflow");
        return 0;
    } 
    else 
    {
        return (p->item[p->top--]);
    }
}

void Binary(stack *p, int n) 
{
    while (n > 0) 
    {
        push(p, n % 2);
        n /= 2;
    }

    while (p->top != -1) 
    {
        printf("%d", pop(p));
    }
}
