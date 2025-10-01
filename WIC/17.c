#include<stdio.h>
int main()
{
    int year;
    printf("\n enter any year");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("\n this is a leap year");
    }
    else
    {
        printf("\n this is not a leap year");
    }
    return 0;
}
