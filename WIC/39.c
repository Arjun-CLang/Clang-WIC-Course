/*Write a program in ‘C’ define a numeric array to store ten numbers and display them.*/
#include<stdio.h>
int main()
{
    int a[10],i;
    printf("\n Enter 10 numbers : ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n The numbers are : ");
    for(i=0;i<10;i++);
    {
        printf("%d ",a[i]);
    }
    return 0;
}