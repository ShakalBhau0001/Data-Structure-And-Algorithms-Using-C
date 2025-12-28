#include<stdio.h>
#include<conio.h>
#define n 5

void main()
{
    int arr[n],i;
    clrscr();
    printf("Enter any 5 Array Elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("\nAll Max Array Elements are:");
    for(i=0;i<n;i++)
    {
        if(arr[i]>n-1)
        {
            printf("\t%d",arr[i]);
        }
    }
    printf("\nAll Min Array Elements are:");
    for(i=0;i<n;i++)
    {
        if(arr[i]<n-1)
        {
            printf("\t%d",arr[i]);
        }
    }
    getch();
}
