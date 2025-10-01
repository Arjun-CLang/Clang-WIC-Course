#include<stdio.h>
int main ()
{
    int a=1;
    int sum=0;
    while(a<=10)
    {
        printf("%d ",a);
        sum=sum+a;
         a++;
    }
    printf("\n the addition is=%d",sum);
    return 0;
}
