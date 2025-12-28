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
    printf("\nAll Even Array Elements are:");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("\t%d",arr[i]);
        }
    }
    getch();
}
