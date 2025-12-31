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
void check_node(node*, int);
void inorder(node*);

void main()
{
    int ch,n,z;
    clrscr();
    do
    {
	    printf("\nEnter Choice:->\n");
	    printf("\n1:Insert:->\n");
	    printf("\n2:Check Node:->\n");
        printf("\n3:[LVR]Traverse InOrder:->\n");
	    printf("\n4:Exit:->\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	        case 1:
	        printf("\nEnter Insert Value:->\n");
	        scanf("%d",&n);
	        insert(n);
	        break;

            case 2:
            printf("\nEnter Node Value to Check:->\n");
            scanf("%d", &n);
            check_node(root, n);
            break;

            case 3:
            inorder(root);
            break;

            case 4:
            exit(1);
        }
    }while(ch!=4);
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

void check_node(node *p, int key)
{
    node *temp;
    temp = root;
    while(temp != NULL) 
    {
        if(key == temp->info) 
        {
            if(temp->left == NULL && temp->right == NULL) 
            {
                printf("\nThe node is a leaf node\n", key);
            } 
            else if(temp->left == NULL || temp->right == NULL) 
            {
                printf("\nThe node has one child.\n", key);
            } 
            else 
            {
                printf("\nThe node has two children.\n", key);
            }
            return;
        } 
        else if(key < temp->info) 
        {
            temp = temp->left;
        } 
        else 
        {
            temp = temp->right;
        }
    }
    printf("\nNode is not found\n", key);
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
