#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include <process.h>
struct edge;

struct node
{
    node *next;
    int info;
    edge *adj;
}*start;

struct edge
{
    int dest;
    edge *right;
};

void ins_ver(int);
void dis_ver();
void search(int);
void ins_edge(int,int);
void find_adj(int);
void dis_graph();

void main()
{
    int v,s,d;
    clrscr();
    do
    {
        printf("\nEnter Your Choise:\n");
        printf("\n1:Insert Vertex\n2:Display Vertex\n3:Search Vertex\n4:Insert Edge\n5:Find Adjency\n6:Display Graph\n7:Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
                printf("\nEnter Vertex:=");
                scanf("%d",&v);
                ins_ver(v);
                break;
    
            case 2:
                dis_ver();
                break;
    
            case 3:
                printf("\nEnter Vertex To Search:=");
                scanf("%d",&s);
                search(s);
                break;
    
            case 4:
                printf("\nEnter Source Vertex:=");
                scanf("%d",&s);
                printf("\nEnter Destination Vertex:=");
                scanf("%d",&d);
                ins_edge(s,d);
                break;
    
            case 5:
                printf("\nEnter Vertex:");
                scanf("%d",&v);
                find_adj(v);
                break;
    
            case 6:
                dis_graph();
                break;
    
            case 7:
                exit(1);
        }
    }while (ch!=7);
    getch();
}

void ins_ver(int x)
{
    node *p,*temp;
    p=(node*)malloc(sizeof(node));
    p->next=NULL;
    p->info=x;
    p->adj=NULL;
    if(start==NULL)
    {
        start=p;
        printf("\n Vertex Is Inserted...\n")
    }
    else
    {
        temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=p;
        printf("\n Vertex Is Inserted...\n")        
    }
}

void dis_ver()
{
    node *temp;
    temp=start;
    while (temp!=NULL)
    {
        printf("\t%d",temp->info);
        temp=temp->next;
    }
}

void search(int srch)
{
    node *temp;
    temp=start;
    int t=0;
    while (temp!=NULL)
    {
        if (srch==temp->info)
        {
            t=1;
            break;
        }
        temp=temp->next;
    }
    if (t==1)
    {
        printf("\n Vertex Is Found...\n");
    }
    else
    {
        printf("\n Vertex Is Not Found...\n");
    }  
}

void ins_edge(int s,int d) 
{
    node *p,*q;
    p=q=start;
    int a=0,b=0;
    while (p!=NULL)
    {
        if (s==p->info)
        {
            a=1;
            break;
        }
        p=p->next;
    }
    while (q!=NULL)
    {
        if (d==q->info)
        {
            b=1;
            break;
        }
        q=q->next;
    }
    if (a==1&&b==1)
    {
        edge *e;
        e=(edge*)malloc(sizeof(edge));
        e->dest=d;
        e->right=NULL;
        if (p->adj==NULL)
        {
            p->adj=e;
            printf("\n Edge Is Inserted...\n");
        }
        else
        {
            edge *t;
            t=p->adj;
            while (t->right!=NULL)
            {
                t=t->right;
            }
            t->right=e;
            printf("\n Edge Is Inserted...\n");
        }
    }
    else
    {
        printf("\n Invalid Edge...\n");
    }   
}

void find_adj(int x)
{
    node *p=start;
    int a=0;
    while (p!=NULL)
    {
        if (x==p->info)
        {
            a=1;
            break;
        }
        p=p->next;
    }
    if(a==1)
    {
        if (p->adj==NULL)
        {
            printf("\n NO Adjacent Vertex...\n")
        }
        else
        {
           edge *t=p->adj;
           while (t!=NULL)
           {
            printf("\t%d",t->dest);
            t=t->right;
           } 
        }
    }
    else
    {
        printf("\n Vertex Is Not Found...\n");
    }
}

void dis_graph()
{
    node *p=start;
    edge *t;
    while(p!=NULL)
    {
        printf("\n%d",p->info);
        t=p->adj;
        while(t!=NULL)
        {
            printf("-->%d",t->dest);
            t=t->right;
        }
        p=p->next;
    }
}
