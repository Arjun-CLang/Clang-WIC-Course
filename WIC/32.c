/*Write a program in ‘C’ Accept user name & print it 5 times using do while loop.*/
#include<stdio.h>
int main ()
{
    int a=1;
    char n;
    printf("\n Enter the name:");
       scanf("%c",&n);
    do
    {
       printf("\n %c",n);
       a++;
    } while (a<=5);
    
}  