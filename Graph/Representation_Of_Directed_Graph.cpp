#include <stdio.h>
#include <conio.h>
adj [50][50];

void main()
{
    int vertex,edge,source,destination,i,j;
    clrscr();
    printf("\n Enter Total Vertices:-> \n");
    scanf("%d",&vertex);
    printf("\n Enter Total Edges:-> \n");
    scanf("%d",&edge);
    for ( i = 1; i <=edge; i++)
    {
        printf("\n Enter %d Edge:-> \n",i);
        printf("\n Enter Source Vertex:-> \n");
        scanf("%d",&source);
        printf("\n Enter Destination Vertex:-> \n");
        scanf("%d",&destination);
        if(source>vertex || destination>vertex || source<=0 || destination<=0)
        {
            printf("\n Invalid Edge....... \n");
            i--;
        }
        else
        {
            adj[source][destination]=1;
        }
    }
    printf("\n Adjacency Matrix Of Directed Graph:-> \n");
    for ( i = 1; i <= vertex; i++)
    {
        for (j = 1; j <= vertex; j++)
        {
            printf("\t%d",adj[i][j]);
        }
        printf("\n");
    }
    getch();
}
