#include<stdio.h>
#include<alloc.h>
#include<process.h>
#include<conio.h>

struct node
{
    node *prev;
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
        p->prev=NULL;
        p->info=x;
        p->next=NULL;
        list=p;
    }
    else
    {
        q=create();
        q->prev=NULL;
        q->info=x;
        q->next=p;
        p->prev=q;
        list=q;
    }
    printf("\nNode is Inserted\n");
}

void ins_end(int x)
{
    node *p,*q;
    p=list;
    if(p==NULL)
    {
        p=create();
        p->prev=NULL;
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
        q->prev=p;
        q->info=x;
        q->next=NULL;
        p->next=q;
    }
    printf("\nNode is Inserted\n");
}

void ins_bet(int after,int x)
{
    node *p,*q;
    p=list;
    if(p==NULL||p->prev==NULL&&p->next==NULL)
    {
        printf("\nInsert Between Not Possible.\n");
    }
    else
    {
        while(p->next!=NULL)
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
    printf("\nNode is Inserted\n");
}

int rem_beg()
{
    int z;
    node *p;
    p=list;
    if(p==NULL)
    {
        printf("\nLinked List is Empty\n");
        return(0);
    }
    else if(p->prev==NULL&&p->next==NULL)
    {
        z=p->info;
        free(p);
        list=NULL;
        return(z);
    }
    else
    {
        z=p->info;
        p->next->prev=NULL;
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
        printf("\n Linked List is Empty.\n");
        return(0);
    }
    else if(p->prev==NULL && p->next==NULL)
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
        printf("\n Linked List is Empty.\n");
        return(0);
    }
    else if(p->prev==NULL && p->next==NULL||p->prev==NULL && p->next->next==NULL)
    {
        printf("\nRemove is Not Possible.\n");
        return(0);
    }
    else
    {
        while(p->next!=NULL)
        {
            if(p->info==after)
            {
                temp=p->next;
                z=temp->info;
                temp->next->prev=p;
                p->next=temp->next;
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
    while(p!=NULL)
    {
        if(p->info==x)
        {
            t=1;
            break;
        }
        p=p->next;
    }
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
    while(p!=NULL)
    {
        cnt++;
        p=p->next;
    }
    printf("\nTotal Node is=%d",cnt);
}

void reverse()
{
    node *t1,*t2,*t3=NULL;
    t1=list;
    while(t1!=NULL)
    {
        t2=t1->next;
        t1->next=t3;
        t1->prev=t2;
        t3=t1;
        t1=t2;
    }
    list=t3;
    printf("\nLinked List is Reversed");
}

void display()
{
    node *p;
    p=list;
    while(p!=NULL)
    {
        printf(" %d",p->info);
        p=p->next;
    }
}
