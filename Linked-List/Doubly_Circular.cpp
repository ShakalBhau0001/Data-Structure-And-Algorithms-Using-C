#include<stdio.h>
#include<alloc.h>
#include<process.h>
#include<conio.h>

struct node
{
    node *next;
    int info;
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
        printf("\nEnter your choice:");
        printf("\n1:Inseret Begin\n2:Insert End\n3:Insert Between\n4:Remove Begin\n5:Remove End\n6:Remove Between\n7:Search\n8:Count\n9:Reverse\n10:Display\n11:Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\nEnter val to Insert:");
            scanf("%d",&n);
            ins_beg(n);//call
            break;

            case 2:
            printf("\nEnter val to Insert:");
            scanf("%d",&n);
            ins_end(n);//call
            break;

            case 3:
            printf("\nAfter which node?");
            scanf("%d",&af);
            printf("\nEnter val to Insert:");
            scanf("%d",&n);
            ins_bet(af,n);//call
            break;

            case 4:
            z=rem_beg();
            printf("\nRemoved value:%d",z);
            break;

            case 5:
            z=rem_end();
            printf("\nRemoved value:%d",z);
            break;

            case 6:
            printf("\nAfter which node?:");
            scanf("%d",&af);
            z=rem_bet(af);
            printf("\nRemoved value:%d",z);
            break;

            case 7:
            printf("\nEnter node value to search:");
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
    }while(ch!=11);//do close
    getch();
}//main close

node* create()
{
    node *z;
    z=(node *)malloc(sizeof(node));
    return(z);
}


void ins_beg(int x)
{
    node *p,*q;
    p=list;
    if(p==NULL)
    {
        p=create();
        p->prev=p;
        p->info=x;
        p->next=p;
        list=p;
    }
    else
    {
        while(p->next!=list)
        {
            p=p->next;
        }
        q=create();
        q->prev=p;
        q->info=x;
        q->next=p->next;
        p->next->prev=q;
        p->next=q;
        list=q;
    }
    printf("\nNode is Inserted.\n");
}

void ins_end(int x)
{
    node *p,*q;
    p=list;
    if(p==NULL)
    {
        p=create();
        p->prev=p;
        p->info=x;
        p->next=p;
        list=p;
    }
    else
    {
        while(p->next!=list)
        {
            p=p->next;
        }
        q=create();
        q->prev=p;
        q->info=x;
        q->next=p->next;
        p->next->prev=q;
        p->next=q;
    }
    printf("\nNode is Inserted.\n");
}

void ins_bet(int after,int x)
{
    node *p,*q;
    p=list;
    if(p==NULL||(p->prev==p && p->next==p))
    {
        printf("Insert Between not possible.\n");
    }
    else
    {
        while(p->next!=list)
        {
            if(p->info==after)
            {
                q=create();
                q->prev=p;
                q->info=x;
                q->next=p->next;
                p->next->prev=q;
                p->next=q;
            }
            p=p->next;
        }
    }
    printf("\nNode is inserted.\n");
}

int rem_beg()
{
    int z;
    node *p,*temp;
    p=list;
    if(p==NULL)
    {
        printf("\nLinked List is Empty.");
        return(0);
    }
    else if(p->prev==p && p->next==p)
    {
        z=p->info;
        free(p);
        list=NULL;
        return(z);
    }
    else
    {
        while(p->next!=list)
        {
            p=p->next;
        }
        temp=p->next;
        z=temp->info;
        p->next=temp->next;
        list=temp->next;
        temp->next->prev=p;
        free(temp);
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
        printf("\nLinked list is Empty.");
        return(0);
    }
    else if(p->prev==p && p->next==p)
    {
        z=p->info;
        free(p);
        list=NULL;
        return(z);
    }
    else
    {
        while(p->next->next!=list)
        {
            p=p->next;
        }
        temp=p->next;
        z=temp->info;
        temp->next->prev=p;
        p->next=temp->next;
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
        printf("\nLinked list is empty.");
    }
    else if(p->prev==p && p->next==p||(p->prev==p->next && p->next->next==p))
    {
        printf("\nRemoved Between not possible.");
        return(0);
    }
    else
    {
        while(p->next!=list)
        {
            if(p->info==after)
            {
                temp=p->next;
                z=temp->info;
                p->next=temp->next;
                temp->next->prev=p;
                free(temp);
                return(z);
            }
            p=p->next;
        }
    }
    return(0);
}

void search(int x)
{
    int t=0;
    node *p;
    p=list;
    do
    {
        if(p->info==x)
        {
            t=1;
            break;
        }
        p=p->next;
    }while(p!=list);
    if(t==1)
    {
        printf("\nNode is Found.\n");
    }
    else
    {
        printf("\nNode is Not Found.\n");
    }
}

void count()
{
    int cnt=0;
    node *p;
    p=list;
    if(p==NULL)
    {
        cnt=0;
    }
    else
    {
        do
        {
            cnt++;
            p=p->next;
        }while(p!=list);
    }
    printf("\nTotal Node is=%d",cnt);
}

void reverse()
{
    node *t1,*t2,*t3=list;
    t1=list;
    do
    {
        t2=t1->next;
        t1->next=t3;
        t3=t1;
        t1=t2;
    } while(t1!=list);
    list=t3;
    t1->next=t3;
    printf("\nLinked List is Reversed");
}

void display()
{
    node *p;
    p=list;
    do
    {
        printf(" %d",p->info);
        p=p->next;
    }while(p!=list);
}
