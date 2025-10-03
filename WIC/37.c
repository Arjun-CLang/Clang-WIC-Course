/* Write a program in ‘C’ to accept only a 4 (four) digit no. and calculate their digits sum (use any loop)*/
#include<stdio.h>
int main()
{
    int num,r,sum=0;
    printf("\n Enter a four digit number : ");
    scanf("%d",&num);
    if(num>=1000 && num<=9999)
    {
        while(num!=0)
        {
            r=num%10;
            sum=sum+r;
            num=num/10;
        }
        printf("\n The sum of digits is : %d",sum);
    }
    else
    {
        printf("\n Please enter only four digit number");
    }   
    return 0;
}
