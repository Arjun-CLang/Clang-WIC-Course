/*Write a program in ‘C’ to accept a number and prints its table, using for loop?*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("\n Enter a number to print its table : ");
    scanf("%d",&a);
    for(b=1;b<=10;b++)
    {
       printf("\n %d * %d = %d",a,b,a*b); 
    }
    return 0;
}