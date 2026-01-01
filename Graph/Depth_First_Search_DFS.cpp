#include<stdio.h>
#include<conio.h>
#define true 1
#define false 0

int v,e;
int adj[50][50];
int visited[50];

void dfs(int);

void main()
{
	int i,s,d,st;
	clrscr();
	printf("Enter Total Vertices:");
	scanf("%d",&v);
	printf("\nEnter Total Edges:");
	scanf("%d",&e);
	for(i=1;i<=e;i++)
	{
	   printf("\nEnter Source Vertex:");
	   scanf("%d",&s);
	   printf("\nEnter Destination Vertex:");
	   scanf("%d",&d);
	   if(s<=0||d<=0||s>v||d>v)
	   {
	      printf("\nInvalid Edge.");
	      i--;
	   }
	   else
	   {
	     adj[s][d]=1;
	   }
	}
	printf("\nEnter Starting Vertex: ");
	scanf("%d",&st);
	printf("\nDFS Result:");
	dfs(st);
	getch();
}

void dfs(int n)
{
    int stack[50],top,i;
    top=-1;
    stack[top]=n;
    while(top!=-1)
    {
        n=stack[top--];
        if(visited[n]==false)
        {
            printf("\t%d",n);
            visited[n]=true;
            for(i=v;i<=1;i--)
            {
                if(adj[n][i]==1&&visited[i]==false)
                {
                    ++top;
                    stack[top]=i;
                }
            }
        }
    }
}
