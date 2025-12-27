#include<stdio.h>
#include<conio.h>
#include<process.h>
#define n 10

int item[n];
int cnt=0;
void insert(int);
void traverse();
void reverse();
int remove(int);

void main()
{
    int x,pos,z,ch;
    clrscr();
    do
    {
        printf("\nEnter your choice:");
        printf("\n1:Insert\n2:Delete\n3:Display\n4:Reverse\n5:Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter val to insert=");
            scanf("%d",&x);
            insert(x);
            break;

            case 2:
            printf("\nEnter position of element to remove=");
            scanf("%d",&pos);
            z=remove(pos);
            printf("\nRemoved Element=%d",z);
            break;

            case 3:
            traverse();
            break;

            case 4:
            reverse();
            break;

            case 5:
            exit(1);
        }
    }while(ch!=5);
    getch();
}

void insert(int x )
{
    static int i = 0;
    item[i] = x;
    i++;
    cnt++;
}

void traverse( )
{
    int i;
    for( i = 0; i<=cnt-1; i++)
    {
        printf("\t%d",item[i]);
    }
}

void reverse()
{
    int i;
    for( i = cnt-1; i>=0;i--)
    {
        printf("\t%d",item[i]);
    }
}

int remove( int pos )
{
    int i,z;
    if (pos < 0 || pos > cnt-1 )
    {
        printf("Delete operation not performed");
        return(0);
    }
    else
    {
        z= item[pos];
        for( i = pos; i<= cnt; i++)
        {
            item[i]=item[i+1];
        }
        cnt--;
        return(z);
    }
}
