#include<stdio.h>
int main()
{
    int s=1,sum=0;
    while(s<=20)
    {
        printf("%d ",s);
        sum=sum+s;
        s++;
    }
    printf("\n the sum of all numbers=%d",sum);
    return 0;
}
