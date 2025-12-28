#include<stdio.h>
#include<conio.h>

void main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3];
    int i,j;
    clrscr();
    printf("Enter First Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter Second Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\nSubtracting the Two Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr3[i][j]=arr1[i][j] - arr2[i][j];
        }
    }
    printf("\nBoth Matrix Subtracted Succesfully!\n");
    printf("\nHere is the new Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    getch();
}
