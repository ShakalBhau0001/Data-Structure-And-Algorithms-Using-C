#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <process.h>

struct node
{
    int info;
    node *next;
}*list;

node* create();
void ins_beg(int);
void ins_end(int);
void ins_bet(int,int);
int rem_beg();
int rem_end();
int rem_bet(int);
void search(int);
void count();
void reverse();
void display();

void main()
{
    int ch,n,af,z,srch;
    clrscr();
    do
    {
        printf("\nEnter Choice:->\n");
        printf("\n1:Insert Begin\n");
        printf("\n2:Insert End\n");
        printf("\n3:Insert Between\n");
        printf("\n4:Remove Begin\n");
        printf("\n5:Remove End\n");
        printf("\n6:Remove Between\n");
        printf("\n7:Node Search\n");
        printf("\n8:Node Count\n");
        printf("\n9:Node Reverse\n");
        printf("\n10:SLLL Display\n");
        printf("\n11:Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter Val Insert Begin=\n");
            scanf("%d",&n);
            ins_beg(n);
            break;

            case 2:
            printf("Enter Val Insert End=\n");
            scanf("%d",&n);
            ins_end(n);
            break;

            case 3:
            printf("After Which Node ?\n");
            scanf("%d",&af);
            printf("Enter Insert Val=\n");
            scanf("%d",&n);
            ins_bet(af,n);
            break;

            case 4:
            z=rem_beg();
		    printf("Removed Value=%d\n",z);
	        break;

            case 5:
            z=rem_end();
		    printf("Removed Value=%d\n",z);
	        break;

            case 6:
            printf("After Which Node ?\n");
            scanf("%d",&af);
            z=rem_bet(af);
		    printf("Removed Value=%d\n",z);
            break;

            case 7:
            printf("Enter Search Val= ");
		    scanf("%d",&srch);
		    search(srch);
	 	    break;

            case 8:
            count();
		    break;

            case 9:
            reverse();
            break;

            case 10:
            display();
            break;

            case 11:
            exit(1);
        }
    } while(ch!=11);
    getch();
}

node* create()
{
    node *z;
    z=(node*)malloc(sizeof(node));
    return (z);
}

void ins_beg(int x)
{
    node *p,*q;
    p=list;
    if(p==NULL)
    {
        p=create();
        p->info=x;
        p->next=NULL;
        list=p;
    }
    else
    {
        q=create();
        q->info=x;
        q->next=p;
        list=q;
    }
    printf("Node is Inserted\n");
}

void ins_end(int x)
{
    node *p,*q;
    p=list;
    if(p==NULL)
    {
        p=create();
        p->info=x;
        p->next=NULL;
        list=p;
    }
    else
    {
        while(p->next!=NULL)
        {
            p=p->next;
        }
        q=create();
        q->info=x;
        q->next=NULL;
        p->next=q;
    }
    printf("Node is Inserted\n");
}

void ins_bet(int after,int x)
{
    node *p,*q;
    p=list;
    if(p==NULL||p->next==NULL)
    {
        printf("Insert Between Not Possible\n");
    }
    else
    {
        while(p->next!=NULL)
        {
            if(p->info==after)
            {
                q=create();
                q->info=x;
                q->next=p->next;
                p->next=q;
            }
            p=p->next;
        }
    }
    printf("Node is Inserted\n");
}

int rem_beg()
{
    int z;
    node *p;
    p=list;
    if(p==NULL)
    {
        printf("SLLL is Empty\n");
    }
    else if(p->next==NULL)
    {
        z=p->info;
        free(p);
        list=NULL;
        return(z);
    }
    else
    {
        z=p->info;
        list=p->next;
        free(p);
        return(z);
    }
}

int rem_end()
{
    int z;
    node *p,*temp;
    p=list;
    if(p==NULL)
    {
        printf("SLLL is Empty\n");
    }
    else if(p->next==NULL)
    {
        z=p->info;
        free(p);
        list=NULL;
        return(z);
    }  
    else
    {
        while(p->next->next!=NULL)
        {
            p=p->next;
        }
        temp=p->next;
        z=temp->info;
        p->next=NULL;
        free(temp);
        return(z);
    }
}

int rem_bet(int after)
{
    int z;
    node *p,*temp;
    p=list;
    if(p==NULL)
    {
        printf("SLLL is Empty\n");
    }
    else if(p->next==NULL||p->next->next==NULL)
    {
        printf("Remove Between Not Possible\n");
    }
    else
    {
        while(p->next!=NULL)
        {
            if(p->info==after)
            {
                temp=p->next;
                z=temp->info;
                p->next=temp->next;
                free(temp);
                return(z);
            }
        }
        p=p->next;
    }
}

void search(int srch)
{
    int t=0;
    node *p;
    p=list;
    while(p!=NULL)
    {
        if(p->info==srch)
        {
            t=1;
            break;
        }
        p=p->next;
    }
    if(t==1)
    {
        printf("Node Is Found\n");
    }
    else
    {
        printf("Node Is Not Found\n");
    }
}

void count()
{
    int c=0;
    node*p;
    p=list;
    while(p!=NULL)
    {
        c++;
        p=p->next;
    }
    printf("Total Nodes=%d",c);
}

void reverse()
{
    node *t1,*t2,*t3=NULL;
    t1=list;
    while(t1!=NULL)
    {
        t2=t1->next;
        t1->next=t3;
        t3=t1;
        t1=t2;
    }
    list=t3;
    printf("SLLL Reveresed\n");
}

void display()
{
    node *p;
    p=list;
    while(p!=NULL)
    {
        printf("%d\t",p->info);
        p=p->next;
    }
}
