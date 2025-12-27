#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define max 50

struct stack 
{
    char item[max];
    int top;
};

void create(stack *);
void push(stack *, char);
char pop(stack *);
int count(stack *, char []);

void main() 
{
    clrscr();
    char str[50];
    int Vowels;
    stack *p, q;
    p = &q; // initializing pointer
    create(p); // stack create
    printf("\nEnter any String: ");
    scanf("%s", str);
    Vowels = count(p, str);
    printf("\nTotal number of vowels in the string = %d", Vowels);
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

int count(stack *p, char str[]) 
{
    int i = 0, d = 0;

    while (str[i] != '\0') 
    {
        push(p, str[i]);
        i++;
    }

    while (p->top != -1) 
    {
        char c = pop(p);
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
        {
            d++;
        }
    }
    return d;
}
