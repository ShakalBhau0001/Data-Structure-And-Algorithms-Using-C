#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define max 50

struct stack 
{
    char item[max];
    int top;
};

void create(stack *);
void push(stack *, char);
char pop(stack *);

void main() 
{
    clrscr();
    char str[50], rev[50];
    int i = 0, j = 0;
    stack *p, q;
    p = &q; // initializing the pointer
    create(p); // stack create
    printf("\nEnter any String: ");
    scanf("%s", str);
    
    while (str[i] != '\0') 
    {
        push(p, str[i]);
        i++;
    }
    
    while (p->top != -1) 
    {
        rev[j] = pop(p);
        j++;
    }
    rev[j] = '\0'; // manual end
    
    printf("\nReversed String = %s", rev);
    
    if (strcmp(str, rev) == 0) 
    {
        printf("\nThe entered string is a palindrome.\n");
    } 
    else 
    {
        printf("\nThe entered string is not a palindrome.\n");
    }
    
    getch();
}

void create(stack *p) 
{
    p->top = -1;
}

void push(stack *p, char x) 
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

char pop(stack *p) 
{
    if (p->top == -1) 
    {
        printf("\nStack Underflow");
        return '\0';
    } 
    else 
    {
        return (p->item[p->top--]);
    }
}
