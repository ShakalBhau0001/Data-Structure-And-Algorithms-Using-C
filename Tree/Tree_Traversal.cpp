#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <alloc.h>

struct node
{
    node *right;
    int info;
    node *left;
}*root;

node* create();
void insert(int);
void preorder(node*);
void inorder(node*);
void postorder(node*);

void main()
{
    int ch,n,z;
    clrscr();
    do
    {
	printf("\nEnter Choice:->\n");
	printf("\n1:Insert:->\n");
	printf("\n2:[VLR]Traverse PreOrder:->\n");
	printf("\n3:[LVR]Traverse InOrder:->\n");
	printf("\n4:[LRV]Traverse PostOrder:->\n");
	printf("\n5:Exit:->\n");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 1:
	    printf("\nEnter Insert Value:->\n");
	    scanf("%d",&n);
	    insert(n);
	    break;

	    case 2:
	    preorder(root);
	    break;

	    case 3:
	    inorder(root);
	    break;

	    case 4:
	    postorder(root);
	    break;

	    case 5:
	    exit(1);
	}
    } while (ch!=5);
    getch();
}

node* create()
{
    node *p;
    p=(node*)malloc(sizeof(node));
    return (p);
}

void insert(int x)
{
    node *p,*temp;
    p=create();
    p->left=NULL;
    p->info=x;
    p->right=NULL;
    if(root==NULL)
    {
		root=p;
		printf("\nNode Is Inserted...\n");
    }
    else
    {
		temp=root;
		while(temp!=NULL)
		{
	    	if(p->info < temp->info)
	    	{
				if(temp->left==NULL)
				{
		    		temp->left=p;
		    		printf("\nNode Is Inserted...\n");
		    		break;
				}
				else
				{
		    		temp=temp->left;
				}
	    	}
	    	else if(p->info > temp->info)
	    	{
				if(temp->right==NULL)
				{
		    		temp->right=p;
		    		printf("\nNode Is Inserted...\n");
		    		break;
				}
				else
				{
		    		temp=temp->right;
				}
	    	}
		}
    }
}

void preorder(node *p)
{
    if(p!=NULL)
    {
		printf("\t%d",p->info);
		preorder(p->left);
		preorder(p->right);
    }
}

void inorder(node *p)
{
    if(p!=NULL)
    {
		inorder(p->left);
		printf("\t%d",p->info);
		inorder(p->right);
    }
}

void postorder(node *p)
{
    if(p!=NULL)
    {
		postorder(p->left);
		postorder(p->right);
		printf("\t%d",p->info);
    }
}
