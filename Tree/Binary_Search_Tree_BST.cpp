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
int count_leaf(node*);
int count_total(node*);
void inorder(node*);
void search(int);
int find_max(node*);
int find_min(node*);
void dis_even(node*);
void dis_odd(node*);
int find_level(node*, int, int);

void main()
{
    int ch,n,z;
    clrscr();
    do
    {
	    printf("\nEnter Choice:->\n");
	    printf("\n1:Insert:->\n");
	    printf("\n2:Leaf_Node Count:->\n");
	    printf("\n3:Total_Node Count:->\n");
	    printf("\n4:Node Search:->\n");
		printf("\n5:[LVR]Traverse InOrder:->\n");
        printf("\n6:Find Max:->\n");
        printf("\n7:Find Min:->\n");
        printf("\n8:Display Even:->\n");
        printf("\n9:Display Odd:->\n");
        printf("\n10:Find Level:->\n");
	    printf("\n11:Exit:->\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	        case 1:
	            printf("\nEnter Insert Value:->\n");
	            scanf("%d",&n);
	            insert(n);
	            break;

	        case 2:
	            z=count_leaf(root);
	            printf("\nTotal Leaf_Node=%d\n",z);
	            break;

		    case 3:
		        z=count_total(root);
		        printf("\nTotal Nodes=%d\n",z);
		        break;

		    case 4:
	            printf("\nEnter Search Val:->\n");
		        scanf("%d",&z);
		        search(z);
		        break;

			case 5:
	        	inorder(root);
	        	break;

	        case 6:
            	z = find_max(root);
            	printf("\nMax Value = %d\n", z);
            	break;

		    case 7:
            	z = find_min(root);
            	printf("\nMin Value = %d\n", z);
            	break;

		    case 8:
            	printf("\nEven Values:->\n");
            	dis_even(root);
            	break;
            
            case 9:
            	printf("\nOdd Values:->\n");
            	dis_odd(root);
            	break;

            case 10:
            	printf("\nEnter Search Val:->\n");
            	scanf("%d", &z);
            	printf("\nLevel of %d = %d\n", z, find_level(root, z, 1));
            	break;

	        case 11:
	            exit(1);
	    }
    } while (ch!=11);
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

int count_leaf(node *p)
{
    if(p==NULL)
    {
		return(0);
    }
    else if(p->left==NULL&&p->right==NULL)
    {
		printf("\t%d",p->info);
		return(1);
    }
    else
    {
		return(count_leaf(p->left)+count_leaf(p->right));
    }
}

int count_total(node *p)
{
	if(p==NULL)
	{
		return 0;
	}
	else if(p->left==NULL&&p->right==NULL)
	{
		return 1;
	}
	else
	{
		return (count_total(p->left)+count_total(p->right)+1);
	}
}

void search(int key)
{
	int f=0;
	node *p;
	p=root;
	while (p!=NULL)
	{
		if(key==p->info)
		{
			f=1;
			break;
		}
		else if(key < p->info)
		{
			p=p->left;
		}
		else if(key > p->info)
		{
			p=p->right;
		}
	}
	if(f==1)
	{
		printf("\nNode Is Found\n");
	}
	else
	{
		printf("Node Is Not Found\n");
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

int find_max(node *p) 
{
    if(p == NULL) 
    {
        return 0;
    }
    else 
    {
        while(p->right != NULL) 
        {
            p = p->right;
        }
        return p->info;
    }
}

int find_min(node *p) 
{
    if(p == NULL) 
    {
        return 0;
    } 
    else 
    {
        while(p->left != NULL) 
        {
            p = p->left;
        }
        return p->info;
    }
}

void dis_even(node *p) 
{
    if(p != NULL) 
    {
        dis_even(p->left);
        if(p->info % 2 == 0) 
        {
            printf("\t%d", p->info);
        }
        dis_even(p->right);
    }
}

void dis_odd(node *p) 
{
    if(p != NULL) 
    {
        dis_odd(p->left);
        if(p->info % 2 != 0) 
        {
            printf("\t%d", p->info);
        }
        dis_odd(p->right);
    }
}

int find_level(node *p, int key, int level) 
{
    if(p == NULL) 
    {
        return 0;
    } 
    else if(p->info == key) 
    {
        return level;
    } 
    else if(key < p->info) 
    {
        return find_level(p->left, key, level + 1);
    }
    else 
    {
        return find_level(p->right, key, level + 1);
    }
}
